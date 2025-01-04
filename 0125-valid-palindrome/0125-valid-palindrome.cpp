class Solution {
public:
    bool isPalindrome(string s) {
        string result="";
        for(char ch:s)
        {
            if(isalnum(ch))
            {
                result+=tolower(ch);
            }
        }
        int j=result.size()-1;
        for(int i=0;i<result.size();i++)
        {
            
            if(result[i]!=result[j])
            {
                return false;
            }
            if(j>0)
            {
            --j;
            }
        }
        return true;
    }
};