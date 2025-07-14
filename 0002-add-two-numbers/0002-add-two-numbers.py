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
def reverse_integer(n):
    sign = -1 if n < 0 else 1
    reversed_num = int(str(abs(n))[::-1])
    return sign * reversed_num
def int_to_linked_list_forward(n):
    head = None
    for digit in str(n):
        node = ListNode(int(digit))
        if head is None:
            head = node
            current = head
        else:
            current.next = node
            current = current.next
    return head

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        num1=list_to_number(l1)
        num2=list_to_number(l2)
        value = num1+num2
        res=reverse_integer(value)
        return int_to_linked_list_forward(res)
        

        