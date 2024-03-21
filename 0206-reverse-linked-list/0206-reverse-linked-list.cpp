/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
     {1,2,3,4,5}
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* prev=nullptr;
        ListNode* newNode;
        while(temp!=nullptr)
        {
            newNode=temp->next;
            temp->next=prev;
            prev=temp;
            temp=newNode;
        }
        return prev;
    }
};