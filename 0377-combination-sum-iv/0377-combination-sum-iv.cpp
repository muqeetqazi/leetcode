class Solution {
public:
    int solve(vector<int>& nums,int target,vector<int>& dp,int n)
    {
        if(target==0)
        {
            return 1;
        }
        if(target<0)
        {
            return 0;
        }
        if(dp[target]!=-1)
        {
            return dp[target];
        }
        int result=0;
        for(int i=0;i<n;i++)
        {
        result+=solve(nums,target-nums[i],dp,n);
        }
        dp[target]=result;
        return dp[target];
    }
    int combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> dp(target+1,-1);
        int ans=solve(nums,target,dp,n);
        return ans;
        
    

    };
};