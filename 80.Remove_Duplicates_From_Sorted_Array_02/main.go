package main

import "fmt"

func removeDuplicates(nums []int) int {
    k := 0 // Pointer for the next valid position
    for _, num := range nums {
        if k < 2 || num != nums[k-2] {
            nums[k] = num
            k++
        }
    }
    return k // Number of valid elements
}

func main() {
    nums := []int{0, 0, 1, 1, 1, 1, 2, 3, 3}
    k := removeDuplicates(nums)
    fmt.Println("Unique count:", k) // Output: 7
    fmt.Println("Modified array:", nums[:k]) // Output: [0, 0, 1, 1, 2, 3, 3]
}
