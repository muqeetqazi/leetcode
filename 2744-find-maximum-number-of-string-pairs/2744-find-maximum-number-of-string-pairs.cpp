class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string, int> hashtable;  // Change value type to int for counting occurrences
        for (const auto& word : words) {
            string sorted_word = word;
            sort(sorted_word.begin(), sorted_word.end());  // Sort the word
            hashtable[sorted_word]++;  // Increment the count of this sorted word
        }
        
        int count = 0;
        // For each unique sorted word, calculate how many pairs can be formed
        for (const auto& pair : hashtable) {
            if (pair.second > 1) {  // If the count of this sorted word is greater than 1
                count += (pair.second * (pair.second - 1)) / 2;  // Calculate the number of pairs
            }
        }
        
        return count;
    }
};
