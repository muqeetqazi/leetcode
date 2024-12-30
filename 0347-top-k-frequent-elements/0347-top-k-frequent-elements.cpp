class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    //     unordered_map<int,int>hashtap;
    //     for(auto& num:nums)
    //     {
    //         hashtap[num]++;
    //     }
     
    //     vector<int> ans;
    //     for(int i=0;i<k;i++)
    //     {
    //         int maxFrequency = 0; 
    //         int mostFrequentNumber = -1;
    //     for (auto& pair : hashtap) {
    //     if (pair.second > maxFrequency) {
    //     maxFrequency = pair.second; 
    //     mostFrequentNumber = pair.first; 

    //     }
    //     }
    //     ans.push_back(mostFrequentNumber);
    //     hashtap.erase(mostFrequentNumber);
        
       
    // }
    //  return ans;
     unordered_map<int, int> frequencyMap;
        for (int num : nums) {
            frequencyMap[num]++;
        }

        // Step 2: Use a min-heap to store top k frequent elements
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        // Step 3: Push the frequencies into the heap
        for (auto& entry : frequencyMap) {
            minHeap.push({entry.second, entry.first});
            // If the heap size exceeds k, pop the smallest element
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        // Step 4: Extract the top k elements from the heap
        vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second);  // Push the element (not frequency)
            minHeap.pop();
        }

        return result;
    };
};