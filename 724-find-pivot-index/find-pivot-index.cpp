class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int lsum=0,rsum=0;
            for(int j=0;j<i;j++){
                rsum+=nums[j];
            }
            for(int j=i+1;j<nums.size();j++){
                lsum+=nums[j];
            }
            if(lsum==rsum){
                ans=i;
                return ans;
            }
        }
        return ans;
    }
};