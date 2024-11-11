// class Solution {

// public:
//     // int solve(vector<int>& nums,int n,vector<int>& dp)
//     // {
//     //     if(n<0)
//     //     {
//     //         return 0;
//     //     }
//     //     if(n==0)
//     //     {
//     //         return nums[0];
//     //     }
//     //     if(dp[n]!=-1)
//     //     {
//     //         return dp[n];
//     //     }
//     //     int include=solve(nums,n-2,dp)+nums[n];
//     //     int exclude=solve(nums,n-1,dp)+0;
//     //     dp[n]= max(include,exclude);
//     //     return dp[n];
//     // }
//     int solve(vector<int>& nums)
//     {
//        int n=nums.size();
//         vector<int> dp(n,0);
//         dp[0]=nums[0];
//        for(int i=1;i<n;i++)
//        {
//         int include=dp[i-2]+nums[i];
//         int exclude=dp[i-1]+0;
//         dp[i]= max(include,exclude);
//        }
       
        
//         return dp[n-1];
//     }

//     int rob(vector<int>& nums) {
      
//     return solve(nums);
//     }
// };
class Solution {
public:
    int solve(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;  // Edge case if nums is empty
        if (n == 1) return nums[0];  // Edge case if only one element is present

        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            int include = dp[i - 2] + nums[i];
            int exclude = dp[i - 1];
            dp[i] = max(include, exclude);
        }
        
        return dp[n - 1];
    }

    int rob(vector<int>& nums) {
        return solve(nums);
    }
};
