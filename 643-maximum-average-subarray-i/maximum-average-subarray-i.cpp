class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int s=0;
        for(int i=0;i<k;i++){
            s=s+nums[i];
        }
        int maxi=INT_MIN;
        maxi=max(maxi,s);
        cout<<maxi<<endl;
        int o=0,j=k;
        while(j<nums.size()){
            s=s-nums[o];
            s=s+nums[j];
            maxi=max(maxi,s);
            o++;
            j++;
        }
        cout<<maxi;
        double avg=maxi/(double)k;
        return avg;
    }
};