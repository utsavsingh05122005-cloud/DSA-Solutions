class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> prefixSum(n+1,0);
        prefixSum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixSum[i]=prefixSum[i-1]+nums[i];
        }
        unordered_map<int,int> freqMap;
        int count=0;
        for(int j=0;j<n;j++){
            if(prefixSum[j]==k){
                count++;
            }
            int requiredSum=prefixSum[j]-k;
            if(freqMap.find(requiredSum)!=freqMap.end()){
                count+=freqMap[requiredSum];
            }
            freqMap[prefixSum[j]]++;
        }
        return count;
    }
};