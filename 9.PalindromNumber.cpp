class Solution {
public:
    bool isPalindrome(int x) {
        long long sum=0;
        int digit,num=x;
        if(num<0) return false;
        while(num!=0){
            digit=num%10;
            sum=sum*10+digit;
            num=num/10;
        }
        return sum==x;
    }
};