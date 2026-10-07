class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0,rp=height.size()-1;
        int maxWater=0;
        while(lp<rp){
            int w=rp-lp;
            int ht=min(height[lp],height[rp]);
            int currentArea=w*ht;
            maxWater=max(maxWater,currentArea);
            height[lp]<height[rp]?lp++:rp--;
        }
        return maxWater;
    }
};