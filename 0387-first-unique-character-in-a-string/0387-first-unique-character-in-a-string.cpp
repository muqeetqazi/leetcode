class Solution {
public:
    int firstUniqChar(string s) {
        int index=-1;
        
        for(int i=0;i<s.size();i++)
        {
            int flag=0;
            for(int j=0;j<s.size();j++)
            {
                if(i!=j&&s[i]==s[j])
                {
                    flag++;
                    break;
                }
            }
            if(flag==0)
            {
                index=i;
break;
            }
        }
        return index;
    }
};