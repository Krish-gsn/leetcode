class Solution {
public:
    bool check(string s,int i,int j){
        while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
        return true;
    }
    bool validPalindrome(string s) {
        int l=s.length();
        int i=0,j=l-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else {
                bool ans1=check(s,i+1,j);
                bool ans2=check(s,i,j-1);
                return ans1||ans2;
            }
        }
        return true;
    }
};