class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(s==e){
                return nums[s];
            }
            int cur=nums[m];
            int left=-1;
            if(m-1 >=0){
                left=nums[m-1];
            }
            int right=-1;
            if(m+1 <nums.size()){
                right=nums[m+1];
            }
            if(cur !=right && cur!=left)
            return cur;
             
            if(cur==left && cur!=right){
                int S=m-1;
                if(S&1)
                e=m-1;
                else 
                s=m+1;
            }

            if(cur==right && cur!=left){
                int S=m;
                if(S&1)
                e=m-1;
                else 
                s=m+1;
            }
        }
        return -1;
    }
};