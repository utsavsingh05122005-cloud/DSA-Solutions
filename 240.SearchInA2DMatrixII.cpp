class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int rowKey=0,colKey=col-1;
        while(rowKey<row && colKey>=0){
            if(matrix[rowKey][colKey]==target){
                return true;
            }
            else if(matrix[rowKey][colKey]>target){
                colKey--;
            }
            else{
                rowKey++;
            }
        }
        return false;
    }
};