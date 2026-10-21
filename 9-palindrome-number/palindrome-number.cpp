class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        long long int r=0,o=x;
        while(x){
            int d=x%10;
            r=r*10+d;
            x=x/10;
        }
        return o==r;
    }
};