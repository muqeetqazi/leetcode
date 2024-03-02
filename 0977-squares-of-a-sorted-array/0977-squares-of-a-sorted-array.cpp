class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(auto s:nums)
        {
            int val=s;
            ans.push_back(val*val);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};