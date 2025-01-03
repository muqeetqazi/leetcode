class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
            int n=board.size();
            for (int i = 0; i < n; i++) {
            unordered_set<char> rowSet;
            for (int j = 0; j < n; j++) {
                if (board[i][j] != '.') { 
                    if (rowSet.count(board[i][j])) {
                        return false;  
                    }
                    rowSet.insert(board[i][j]);
                }
            }
        }
       
        for (int i = 0; i < n; i++) {
            unordered_set<char> colSet;
            for (int j = 0; j < n; j++) {
                if (board[j][i] != '.') {  
                    if (colSet.count(board[j][i])) {
                        return false;  
                    }
                    colSet.insert(board[j][i]);
                }
            }
        }
        //check the sub boxes
        for(int i=0;i<n;i+=3)
        {
            for(int j=0;j<n;j+=3)
            {
                 unordered_set<int> boxSet;
                for(int k=i;k<i+3;k++)
                {
                   
                    for(int l=j;l<j+3;l++)
                   {
                     if (board[k][l] != '.') {
                            if (boxSet.count(board[k][l])) {
                                return false;
                            }
                            boxSet.insert(board[k][l]);
                        }
                   }
                   
                }
            }
        }
        return true;
    }
};