class Solution {
public:
    int rob(vector<int>& nums) {
        int even = 0;
        int old = 0;
        
        for (int i = 0; i < nums.size(); i = i + 2) {
            if (i % 2 == 0) {
                even = max(even + nums[i], old);
            } else {
                old = max(old + nums[i], even);
            }
        }

        return max(even, old);
    }
};
