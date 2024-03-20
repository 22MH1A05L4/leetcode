# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeInBetween(self, list1: ListNode, a: int, b: int, list2: ListNode) -> ListNode:
        left = list1
        for i in range(a - 1):
            left = left.next
        # Find node that follows index b in first list
        right = left
        for i in range(b - a + 2):
            right = right.next
        # Find tail node of second list            
        tail = list2
        while tail.next:
            tail = tail.next
        # Make the connections
        left.next = list2
        tail.next = right
        return list1     