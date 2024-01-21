class Solution {
public:
    int rob(vector<int>& nums) {
        int evenRob = 0;  // Total amount when robbing houses at even indices
        int oddRob = 0;   // Total amount when robbing houses at odd indices

        // Iterate through the houses
        for (int i = 0; i < nums.size(); ++i) {
            if (i % 2 == 0) {
                evenRob = max(evenRob + nums[i], oddRob);
            } else {
                oddRob = max(oddRob + nums[i], evenRob);
            }
        }

        // Return the maximum of the two cases
        return max(evenRob, oddRob);
    }
};
