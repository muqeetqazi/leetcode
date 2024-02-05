#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n;   
        // Reverse the entire array
        reverse(arr.begin(), arr.end());
        // Reverse the first k elements
        reverse(arr.begin(), arr.begin() + k);
        // Reverse the remaining elements
        reverse(arr.begin() + k, arr.end());
    }
};