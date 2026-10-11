class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero+=1;
            }
            else if(nums[i]==1){
                one+=1;
            }
            else{
                two+=1;
            }
        }
        for(int i=0;i<zero;i++){
            nums[i]=0;
        }
        for(int i=zero;i<zero+one;i++){
            nums[i]=1;
        }
        for(int i=zero+one;i<zero+one+two;i++){
            nums[i]=2;
        }
    }
};