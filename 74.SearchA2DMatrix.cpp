class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()) return false;
        int row=matrix.size();
        int col=matrix[0].size();
        int startRow=0,endRow=row-1;
        while(startRow<=endRow){
            int midRow=startRow+(endRow-startRow)/2;
            if(target<matrix[midRow][0]){
                endRow=midRow-1;
            }
            else if(target>matrix[midRow][col-1]){
                startRow=midRow+1;
            }
            else{
                int startCol=0,endCol=col-1;
                while(startCol<=endCol){
                    int midCol=startCol+(endCol-startCol)/2;
                    if(target==matrix[midRow][midCol]){
                        return true;
                    }
                    else if(target>matrix[midRow][midCol]){
                        startCol=midCol+1;
                    }
                    else{
                        endCol=midCol-1;
                    }
                }
                return false;
            }
        }
        return false;
    }      
};