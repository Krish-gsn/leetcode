class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isI,isD,ans=false;
        int i=0,j=i+1;
        while(j<nums.size()){
            if(nums[i]<=nums[j]){
                isI=true;
                i++;
                j++;
            }
            else{
                isI=false;
                break;
            }
        }
        i=0,j=i+1;
        while(j<nums.size()){
            if(nums[i]>=nums[j]){
                isD=true;
                i++;
                j++;
            }
            else{
                isD=false;
                break;
            }
        }
        if((isI==1) || (isD==1)){
        ans=true;
        return ans;
        }
        // else if((isI==0) || (isD==0)){
        // ans=false;
        // return ans;
        // }
        return ans;
    }
};