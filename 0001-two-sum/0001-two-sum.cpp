// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
      
//         vector<int> ans;
//         for(int i=0;i<nums.size();i++) 
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]+nums[j]==target)
//                 {
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     return ans;
//                 }
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // Stores numbers and their indices
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                ans.push_back(numMap[complement]);
                ans.push_back(i);
                return ans; // Return the indices immediately
            }
            numMap[nums[i]] = i; // Add the current number and its index to the map
        }
        return ans; // Return empty vector if no solution is found
    }
};
