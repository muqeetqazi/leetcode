class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char,int> st;
        int i,n;
        n = s.length();
        for(i=0;i<n;i++)
        {
            if(st.find(s[i])!= st.end())
            {
                st[s[i]]++;
            }
            else
            {
                st[s[i]] = 1;
            }
        }
        for(i=0;i<n;i++)
        {
            if(st[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};