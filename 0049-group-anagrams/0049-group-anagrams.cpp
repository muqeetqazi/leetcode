
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> mp;
       for(auto x:strs)
       {
           string word=x;
           sort(word.begin(),word.end());
           mp[word].push_back(x);
       }
       vector<vector<string>>result;
       for(auto x:mp)
       {
           result.push_back(x.second);
       }
        return result;
    }
};
