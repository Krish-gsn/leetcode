class Solution {
public:
    int bs(vector<int>&nums,int s,int x){
        int e=nums.size()-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]==x)
            return m;
            else if(nums[m]>x){
                e=m-1;
            }
            else
            s=m+1;
        }
        return -1;
    }
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++){
            int x=nums[i]+k;
            int v=bs(nums,i+1,x);
            if(v!=-1){
                ans.insert({nums[i],nums[v]});
            }
        }
        return ans.size();
    }
};