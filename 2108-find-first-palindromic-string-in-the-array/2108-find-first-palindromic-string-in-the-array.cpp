#include <vector>
#include <string>

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans = "";
        int temp = 0;

        for (auto s : words) {
            int start = 0;
                int end = s.size() - 1;
                bool isParadrom=true;
            for (int i = 0; i < s.size(); i++) {
                
                if (s[start] != s[end]) {
                   isParadrom=false;
                    break;
                }
                start++;
                end--;
            }
            if (isParadrom) {
                ans += s;
                break; 
            }
        }
        return ans;
    }
};
