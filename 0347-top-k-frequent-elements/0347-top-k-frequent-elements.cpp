class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>hashtap;
        for(auto& num:nums)
        {
            hashtap[num]++;
        }
     
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            int maxFrequency = 0; 
            int mostFrequentNumber = -1;
        for (auto& pair : hashtap) {
        if (pair.second > maxFrequency) {
        maxFrequency = pair.second; 
        mostFrequentNumber = pair.first; 

        }
        }
        ans.push_back(mostFrequentNumber);
        hashtap.erase(mostFrequentNumber);
        
       
    }
     return ans;
    };
};