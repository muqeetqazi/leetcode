class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<k)
            {
                ans++;
            }
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            int product=nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                product=product*nums[j];
                if(product<k)
                {
                    ans++;
                }
                else{
                    break;
                }
            }
        }
        
        return ans;
    }
};