class Solution {
public:
    bool dpcheck(vector<int>& nums,int& totalsum)
    {
        if(totalsum%2!=0)
        return false;
int target=totalsum/2;
        vector<bool>dp(target+1,false);
        dp[0]=true;
    
         for (int num : nums) {
        for (int i = target; i >= num; --i) {
            dp[i] = dp[i] || dp[i - num];
        }
    }
    return dp[target];
    }
    bool canPartition(vector<int>& nums) {
         int totalsum=0;
         for(int num: nums)
         {
            totalsum+=num;
         }
        return dpcheck(nums,totalsum);
    }
};