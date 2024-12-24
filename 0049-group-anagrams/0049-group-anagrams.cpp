class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> hashTable;
        for(auto& str:strs)
        {
            string sortedstring=str;
            sort(sortedstring.begin(),sortedstring.end());
            hashTable[sortedstring].push_back(str);
        }
          vector<vector<string>> result;
    for (const auto& pair : hashTable) {
        result.push_back(pair.second); // Each group of anagrams
    }

    return result;
    
    }
};