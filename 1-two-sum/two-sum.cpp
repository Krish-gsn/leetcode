class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {

        vector<pair<int,int>> a;

        for(int i=0; i<nums.size(); i++){
            a.push_back({nums[i], i});
        }

        sort(a.begin(), a.end());

        int l = 0;
        int h = a.size() - 1;

        while(l < h){

            int s = a[l].first + a[h].first;

            if(s > t)
                h--;
            else if(s < t)
                l++;
            else
                return {a[l].second, a[h].second};
        }

        return {};
    }
};