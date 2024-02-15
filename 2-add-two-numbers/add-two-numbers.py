# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummy_head = ListNode(0)
        current = dummy_head
        carry = 0

        while l1 or l2:
            # Extract digits from the nodes
            x = l1.val if l1 else 0
            y = l2.val if l2 else 0

            # Compute the sum of the digits along with the carry
            total = carry + x + y
            carry = total // 10
            current.next = ListNode(total % 10)
            current = current.next

            # Move to the next nodes
            if l1:
                l1 = l1.next
            if l2:
                l2 = l2.next

        # Handle the carry if there's any after iterating through both lists
        if carry > 0:
            current.next = ListNode(carry)

        return dummy_head.next
