class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,j=i+1,count=0;
        set<pair<int,int>>ans;
        while(j<nums.size()){
            int dif=abs(nums[i]-nums[j]);
            if(dif==k){
                ans.insert({nums[i],nums[j]});
                i++;j++;
            }
            else if(dif<k){
                j++;
            }
            else
            i++;
            if(i==j) j++;
        }
        return ans.size();
    }
};