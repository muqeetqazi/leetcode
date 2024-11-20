class Solution {
public:
    int solve(int n,vector<int>& dp)
    {
          if (n == 0) return 0;
        if (n == 1) return 1;
        if (dp[n] != -1) return dp[n];

        int maxProduct = 0;
        for(int i=1;i<n;++i)
        {
            maxProduct = max(maxProduct, max(i * (n - i), i * solve(n - i, dp)));
        }
        return dp[n]=maxProduct;
 //        int maxProduct = 0;
//         for (int i = 1; i < n; ++i) {
            
//             maxProduct = max(maxProduct, max(i * (n - i), i * solve(n - i, dp)));
//         }
//         return dp[n] = maxProduct;

    }
    int integerBreak(int n) {
        vector<int>dp (n+1,-1);
        return solve(n,dp);
        
    }
};
// class Solution {
// public:
//     int solve(int n, vector<int>& dp) {
//         if (n == 0) return 0;
//         if (n == 1) return 1;
//         if (dp[n] != -1) return dp[n];

//         int maxProduct = 0;
//         for (int i = 1; i < n; ++i) {
            
//             maxProduct = max(maxProduct, max(i * (n - i), i * solve(n - i, dp)));
//         }
//         return dp[n] = maxProduct;
//     }

//     int integerBreak(int n) {
//         vector<int> dp(n + 1, -1);
//         return solve(n, dp);
//     }
// };
