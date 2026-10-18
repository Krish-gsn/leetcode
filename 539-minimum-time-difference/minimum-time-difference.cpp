class Solution {
public:
    int giveMins(string&time){
    int hr = stoi(time.substr(0, 2));
    int min = stoi(time.substr(3, 2));
    return 60 * hr + min;
}
    int findMinDifference(vector<string>& timePoints) {
        vector<int>m;
        for(int i=0;i<timePoints.size();i++){
            m.push_back(giveMins(timePoints[i]));
        }
        sort(m.begin(),m.end());
        int d=INT_MAX;
        for(int i=1;i<m.size();i++){
            d=min(d,m[i]-m[i-1]);
        }
        int k=min(d,(1440+m[0])-m[m.size()-1]);
        return k;
    }
};