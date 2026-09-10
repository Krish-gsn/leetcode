class Solution {
public:
    int First(vector<int>& nums,int target){
        int s=0,e=nums.size()-1,ans=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]==target){
                ans=m;
                e=m-1;
            }
            else if(nums[m]<target)
            s=m+1;
            else
            e=m-1;
        }
        return ans;
    }
    int Last(vector<int>& nums,int target){
        int s=0,e=nums.size()-1;
        int last=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]==target){
                last=m;
                s=m+1;
            }
            else if(nums[m]<target){
                s=m+1;
            }
            else
            e=m-1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;        
        int a=First(nums,target);
        int l=Last(nums,target);
        ans.push_back(a);
        ans.push_back(l);
        return ans;
    }
};