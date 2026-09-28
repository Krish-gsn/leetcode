class Solution {
public:
    bool can(vector<int>piles,int h,int k){
        long long int hr=0;
        for(int i=0;i<piles.size();i++){
            hr+=ceil(piles[i]/(double)k);
        }
        return hr<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
        auto it =max_element(piles.begin(),piles.end());
        int e=*it;
        int ans=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            int k=m;
            if(can(piles,h,k)){
                ans=k;
                e=m-1;
            }
            else 
            s=m+1;
        }
        return ans;
    }
};