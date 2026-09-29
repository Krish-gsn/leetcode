class Solution {
public:
    int bs(vector<int>&nums,int s,int x){
        int e=nums.size()-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]==x){
                return m;
            }
            else if(nums[m]<x){
                s=m+1;
            }
            else
            e=m-1;
        }
        return -1;
    }
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++){
            int a=bs(nums,i+1,nums[i]+k);
            if(a!=-1){
                 ans.insert({nums[i],nums[i]+k});
            }
        }
        return ans.size();
    }
};