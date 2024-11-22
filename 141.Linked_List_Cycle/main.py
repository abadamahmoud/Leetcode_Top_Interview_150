class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        if not head or not head.next:
            return False
        slow, fast = head, head.next
        while fast and fast.next:
            if slow == fast:
                return True
            slow = slow.next
            fast = fast.next.next
        return False

if __name__ == "__main__":
    # Create nodes
    head = ListNode(3)
    head.next = ListNode(2)
    head.next.next = ListNode(0)
    head.next.next.next = ListNode(-4)

    # Create a cycle
    head.next.next.next.next = head.next

    # Check for cycle
    solution = Solution()
    print("Has Cycle:", solution.hasCycle(head))  # Output: True
