class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int buying=INT_MAX;
     int index=0;
     for(int i=0;i<prices.size();i++)
     {
        if(prices[i]<buying)
        {
            buying=prices[i];
            index=i;
        }
     }
     if(index==prices.size())
     {
        return 0;
     }
     int selling=INT_MIN;
     for(int i=index;i<prices.size();i++)
     {
        if(selling<prices[i])
        {
            selling=prices[i];
        }
     }
     return selling-buying;
    }
};