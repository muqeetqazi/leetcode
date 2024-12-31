class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1); // Initialize result array with 1
        
        // Compute prefix products
        for (int i = 1; i < n; i++) {
            result[i] = result[i - 1] * nums[i - 1];
        }
        
        // Compute suffix products on the fly
        int suffixProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= suffixProduct; // Multiply the prefix product with the current suffix product
            suffixProduct *= nums[i]; // Update suffix product
        }
        
        return result;
    }
};