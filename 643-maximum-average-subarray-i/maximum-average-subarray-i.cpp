class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0,maxi=INT_MIN;
        for(int h=0;h<k;h++){
            sum+=nums[h];
        }
        maxi=max(maxi,sum);
        int j=k,i=0;
        while(j<nums.size()){
            sum+=nums[j];
            sum-=nums[i];
            maxi=max(maxi,sum);
            i++,j++;
        }
        double avg=maxi/double(k);
        return avg;
    }
};