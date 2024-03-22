/**
 * Definition for singly-linked myList.
 * struct myListNode {
 *     int val;
 *     myListNode *next;
 *     myListNode() : val(0), next(nullptr) {}
 *     myListNode(int x) : val(x), next(nullptr) {}
 *     myListNode(int x, myListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> myList;
        bool ans=true;
        while(head!=nullptr)
        {
            myList.push_back(head->val);
            head=head->next;
        }
      
        int left = 0, right = myList.size() - 1;
        while (left < right && myList[left] == myList[right]) {
            left++;
            right--;
        }
        return left >= right;
    }
};