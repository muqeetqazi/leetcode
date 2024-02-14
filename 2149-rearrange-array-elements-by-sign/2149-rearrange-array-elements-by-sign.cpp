class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            {
                pos.push_back(nums[i]);
            }
            if(nums[i]<0)
            {
                neg.push_back(nums[i]);
            }
        }
       int ns=pos.size();
       int ps=neg.size();
       int i=0,j=0;
       while(i!=ps&&j!=ns)
       {
           ans.push_back(pos[i]);
           ans.push_back(neg[j]);
           i++;
           j++;
       }
        return ans;
            }
};