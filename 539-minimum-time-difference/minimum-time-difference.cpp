class Solution {
public:
int giveMins(string&time){
    int hr = stoi(time.substr(0,2));
    int min = stoi(time.substr(3,2));

    return 60*hr+min;
}
    int findMinDifference(vector<string>& timePoints) {
        vector<int>mins;
        for(int i=0;i<timePoints.size();i++){
            mins.push_back(giveMins(timePoints[i]));
        }

        sort(mins.begin(),mins.end());
        int minDiff = INT_MAX;
        for(int i=1;i<mins.size();i++){
            minDiff = min(minDiff,mins[i]-mins[i-1]);
        }
        int lastDiff = min(minDiff,(1440+mins[0])-mins[mins.size()-1]);
        return lastDiff;
    }
};