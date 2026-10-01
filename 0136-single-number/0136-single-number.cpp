class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            m[num]=m[num]+1;
        }
        int ans;
        unordered_map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();it++){
            int key=it->first;
            int val=it->second;
            if(val==1){
                ans=key;
            return ans;
            }
        }
        return ans;
    }
};