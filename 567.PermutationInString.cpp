class Solution {
public:
    bool isFrequencySame(int count1[], int count2[]) {
        for(int i = 0; i < 26; i++) {
            if(count1[i] != count2[i]) {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int len1=s1.length();
        int len2=s2.length();
        if(len2<len1){
            return false;
        }
        int count1[26]={0};
        for(int i=0;i<len1;i++){
            count1[s1[i]-'a']++;
        }
        int windowSize=len1;
        for(int i=0;i<len2;i++){
            int windowIndex=0,index=i;
            int windowFreq[26]={0};
            while(windowIndex<windowSize && index<len2){
                windowFreq[s2[index]-'a']++;
                windowIndex++;
                index++;
            }
            if(isFrequencySame(count1,windowFreq)){
                return true;
            }
        }
        return false;    
    }
};