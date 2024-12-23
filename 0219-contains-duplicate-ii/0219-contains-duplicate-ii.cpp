class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) { // Start from i+1 to avoid duplicate checks
                if (nums[i] == nums[j]) {
                    if (abs(i - j) <= k) { // abs is redundant because i < j
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
