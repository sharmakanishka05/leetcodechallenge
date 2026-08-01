class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int row=matrix.size();
     int col=matrix[0].size();
     int i=0;
     int j=col-1;
     while (i<row && j>=0){
        int element=matrix[i][j];
        if(element==target)
        return 1;

        if(element>target)
        j--;

        else
        i++;

     } 
     return 0;
    }
};