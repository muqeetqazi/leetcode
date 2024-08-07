class Solution {
public:
    int triangularSum(vector<int>& nums) {
       while(nums.size()>1)
       {
        std::vector<int> numsum(nums.size() - 1, 0);
           for (int i = 0; i < nums.size() - 1; ++i) {
                numsum[i] = (nums[i] + nums[i + 1]) % 10; 
            }
            nums = numsum;
       }
       return nums[0];
    }
};
