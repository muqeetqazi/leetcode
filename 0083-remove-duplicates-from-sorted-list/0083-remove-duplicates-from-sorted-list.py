class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        result = set()
        current = head

        while current:
            result.add(current.val)
            current = current.next

        dummy = ListNode()
        curr = dummy

        for value in sorted(result):
            curr.next = ListNode(value)
            curr = curr.next

        return dummy.next
