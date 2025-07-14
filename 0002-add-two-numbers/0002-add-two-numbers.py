# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def list_to_number(l: Optional[ListNode]) -> int:
    num = 0
    mul = 1
    while l:
        num += l.val * mul
        mul *= 10
        l = l.next
    return num

def int_to_linked_list_reverse(n):
    digits = [int(d) for d in str(n)[::-1]]
    head = ListNode(digits[0])
    current = head
    for d in digits[1:]:
        current.next = ListNode(d)
        current = current.next
    return head

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        num1 = list_to_number(l1)
        num2 = list_to_number(l2)
        value = num1 + num2
        return int_to_linked_list_reverse(value)
