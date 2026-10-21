class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        if (matrix.empty()) return ans;

        int strRow = 0, endRow = matrix.size() - 1;
        int strCol = 0, endCol = matrix[0].size() - 1;

        while (strRow <= endRow && strCol <= endCol) {

            // 1. Top row
            for (int i = strCol; i <= endCol; i++)
                ans.push_back(matrix[strRow][i]);

            // 2. Right column
            for (int i = strRow + 1; i <= endRow; i++)
                ans.push_back(matrix[i][endCol]);

            // 3. Bottom row
            if (strRow < endRow) {
                for (int i = endCol - 1; i >= strCol; i--)
                    ans.push_back(matrix[endRow][i]);
            }

            // 4. Left column
            if (strCol < endCol) {
                for (int i = endRow - 1; i > strRow; i--)
                    ans.push_back(matrix[i][strCol]);
            }

            strRow++;
            endRow--;
            strCol++;
            endCol--;
        }

        return ans;
    }
};
