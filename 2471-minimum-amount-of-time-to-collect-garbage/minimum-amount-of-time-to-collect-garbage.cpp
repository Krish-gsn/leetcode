class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickP=0,lastP=0;
        int pickG=0,lastG=0;
        int pickM=0,lastM=0;
        for(int i=0;i<garbage.size();i++){
            string cur=garbage[i];
            for(int j=0;j<cur.size();j++){
                if(cur[j]=='P'){
                    pickP++;
                    lastP=i;
                }
                if(cur[j]=='G'){
                    pickG++;
                    lastG=i;
                }
                if(cur[j]=='M'){
                    pickM++;
                    lastM=i;
                }
            }
        }
        int travelP=0,travelG=0,travelM=0;
        for(int i=0;i<lastP;i++)
        travelP=travelP+travel[i];
        for(int i=0;i<lastG;i++)
        travelG+=travel[i];
        for(int i=0;i<lastM;i++)
        travelM+=travel[i];

        int total=(travelP+travelG+travelM)+(pickP+pickG+pickM);
        return total;
    }
};