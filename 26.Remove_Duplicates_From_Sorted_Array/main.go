package main

import "fmt"

func removeDuplicates(nums []int) int {
    k := 0 // Index for the next unique element
    for i := 1; i < len(nums); i++ {
        if nums[i] != nums[k] {
            k++
            nums[k] = nums[i]
        }
    }
    return k + 1 // Return the count of unique elements
}

func main() {
    nums := []int{0, 0, 1, 1, 1, 2, 2, 3, 3, 4}
    k := removeDuplicates(nums)
    fmt.Println("Unique count:", k) // Output: 5
    fmt.Println("Modified array:", nums[:k]) // Output: [0, 1, 2, 3, 4]
}
