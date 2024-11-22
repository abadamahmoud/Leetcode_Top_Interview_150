package main

import "fmt"

// ListNode defines a node in the linked list
type ListNode struct {
    Val  int
    Next *ListNode
}

// Solution struct for OOP
type Solution struct{}

func (s Solution) HasCycle(head *ListNode) bool {
    if head == nil || head.Next == nil {
        return false
    }

    slow, fast := head, head.Next
    for fast != nil && fast.Next != nil {
        if slow == fast {
            return true
        }
        slow = slow.Next
        fast = fast.Next.Next
    }
    return false
}

func main() {
    // Create nodes
    head := &ListNode{Val: 3}
    head.Next = &ListNode{Val: 2}
    head.Next.Next = &ListNode{Val: 0}
    head.Next.Next.Next = &ListNode{Val: -4}

    // Create a cycle
    head.Next.Next.Next.Next = head.Next

    // Check for cycle
    solution := Solution{}
    fmt.Println("Has Cycle:", solution.HasCycle(head))
}
