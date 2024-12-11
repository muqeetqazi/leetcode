class Solution {
public:
    int solve(vector<int> coins,int amount)
    {
        if(amount==0)
        {
            return 0;
        }
        if(amount<0)
        {
            return INT_MAX;
        }
        int res=INT_MAX;
        for(int coin:coins)
        {
            int subproblem=solve(coins,amount-coin);
            if(subproblem!=INT_MAX)
            {
                res=min(res,subproblem+1);
            }
        }
        return res;
    }
    int coinChange(vector<int>& coins, int amount) {
        if(solve(coins,amount)==INT_MAX)
        {
            return -1;
        }
        return solve(coins,amount);
    }
};