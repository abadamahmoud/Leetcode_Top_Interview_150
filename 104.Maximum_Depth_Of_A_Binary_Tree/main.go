package main

import "fmt"

type TreeNode struct {
    Val   int
    Left  *TreeNode
    Right *TreeNode
}

type Solution struct{}

func (s Solution) maxDepth(root *TreeNode) int {
    if root == nil {
        return 0
    }
    leftDepth := s.maxDepth(root.Left)
    rightDepth := s.maxDepth(root.Right)
    if leftDepth > rightDepth {
        return leftDepth + 1
    }
    return rightDepth + 1
}

func main() {
    root := &TreeNode{Val: 3}
    root.Left = &TreeNode{Val: 9}
    root.Right = &TreeNode{Val: 20, Left: &TreeNode{Val: 15}, Right: &TreeNode{Val: 7}}

    solution := Solution{}
    fmt.Println("Maximum Depth:", solution.maxDepth(root)) // Output: 3
}
