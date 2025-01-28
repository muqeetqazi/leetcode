class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures)
    {
        stack<int>st;
        int len=temperatures.size();
        vector<int>ans(len,0);    
        int i;
        for(i=len-1;i>=0;i--)
        {
            while(st.size()&&temperatures[st.top()]<=temperatures[i])
                st.pop();
            if(st.size())
                ans[i]=st.top()-i;
            else
                ans[i]=0;
            st.push(i);
        }
        return ans;
    }
};