class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buying = INT_MAX; // Minimum price seen so far
        int maxProfit = 0;    // Maximum profit

        for (int price : prices) {
            // Update the minimum buying price
            if (price < buying) {
                buying = price;
            }
            // Calculate the profit and update the maxProfit
            else {
                maxProfit = max(maxProfit, price - buying);
            }
        }

        return maxProfit;
    }
};
