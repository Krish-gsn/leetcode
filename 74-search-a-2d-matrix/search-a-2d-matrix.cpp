class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int n=row*col;
        int s=0,e=n-1;
        while(s<=e){
            int m=s+(e-s)/2;
            int r=m/col;
            int c=m%col;
            if(matrix[r][c]==target)
            return true;
            else if(matrix[r][c]>target)
            e=m-1;
            else
            s=m+1;
        }
        return false;
    }
};