class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
         int n = matrix.size();

        // Check each row
        for (int i = 0; i < n; i++) {
            unordered_set<int> rowSet;
            for (int j = 0; j < n; j++) {
                // Check if the number is in range [1, n]
                if (matrix[i][j] < 1 || matrix[i][j] > n) {
                    return false; // Invalid number
                }
                rowSet.insert(matrix[i][j]);
            }
            if (rowSet.size() != n) return false; // Row is not valid
        }

        // Check each column
        for (int j = 0; j < n; j++) {
            unordered_set<int> colSet;
            for (int i = 0; i < n; i++) {
                // Check if the number is in range [1, n]
                if (matrix[i][j] < 1 || matrix[i][j] > n) {
                    return false; // Invalid number
                }
                colSet.insert(matrix[i][j]);
            }
            if (colSet.size() != n) return false; // Column is not valid
        }

        return true;  
    }
};