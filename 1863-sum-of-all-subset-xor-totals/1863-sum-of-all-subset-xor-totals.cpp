#include <vector>

class Solution {
public:
    int subsetXORSum(std::vector<int>& nums) {
        return solve(0, nums, 0);
    }
    
private:
    int solve(int i, std::vector<int>& nums, int xorVal) {
        // Base case: If we've considered all elements, return the current XOR value
        if (i >= nums.size()) return xorVal;

        // Recursive case:
        // 1. Include the current element in the XOR calculation
        // 2. Exclude the current element from the XOR calculation
        return solve(i + 1, nums, xorVal ^ nums[i]) + solve(i + 1, nums, xorVal);
    }
};
