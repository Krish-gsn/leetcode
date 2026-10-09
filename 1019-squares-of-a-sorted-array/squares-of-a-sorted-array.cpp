class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        vector<int>ans(nums.size());
        for(int i=ans.size()-1;i>=0;i--){
            if(abs(nums[l])<abs(nums[h])){
                long long int k=nums[h]*nums[h];
                ans[i]=k;
                h--;
            }
            else {
                long long int j=nums[l]*nums[l];
                ans[i]=j;
                l++;
            }
        }
        return ans;
    }
};