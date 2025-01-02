class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
       int n=matrix.size();
       for(int i=0;i<n;i++)
       {
        unordered_set<int> Rowset;
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]<1||matrix[i][j]>n)   return false;
            
            Rowset.insert(matrix[i][j]);
        }
        if(Rowset.size()!=n) return false;
       } 
       for(int i=0;i<n;i++)
       {
        unordered_set<int> Colset;
        for(int j=0;j<n;j++)
        {
            if(matrix[j][i]<1||matrix[j][i]>n) return false;

            Colset.insert(matrix[j][i]);
        }
        if(Colset.size()!=n) return false;
        
       }  
       return true;
    }
};