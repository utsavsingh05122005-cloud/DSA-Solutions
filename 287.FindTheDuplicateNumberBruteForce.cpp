class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        int n=nums.size();
        int a;
        for(int i=0;i<n;i++){
            if(s.find(nums[i]) != s.end()){
                a=nums[i];
                return nums[i];
            }
            s.insert(nums[i]);
        }
        return -1;
    }
};