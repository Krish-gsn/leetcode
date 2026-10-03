class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int l=0,h=numbers.size()-1;
        while(l<=h){
            int s=numbers[l]+numbers[h];
            if(s==target){
                ans.push_back(l+1);
                ans.push_back(h+1);
                return ans;
            }
            else if(s>target){
                h--;
            }
            else
            l++;
        }
        return ans;
    }
};