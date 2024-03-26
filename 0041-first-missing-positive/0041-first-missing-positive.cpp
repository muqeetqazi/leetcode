#include <vector>
#include <unordered_map>

class Solution {
public:
    int firstMissingPositive(std::vector<int>& nums) {
        std::unordered_map<int, int> mp;
        for (int num : nums) {
            if (num > 0) {
                mp[num]++;
            }
        }
        
        int ans = 1;
        while (mp.find(ans) != mp.end()) {
            ans++;
        }
        
        return ans;
    }
};
