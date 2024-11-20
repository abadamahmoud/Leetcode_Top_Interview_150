package main

import "fmt"

func rotate(nums []int, k int) {
    n := len(nums)
    k %= n // Handle cases where k >= n

    reverse := func(start, end int) {
        for start < end {
            nums[start], nums[end] = nums[end], nums[start]
            start++
            end--
        }
    }

    reverse(0, n-1) // Step 1: Reverse the entire array
    reverse(0, k-1) // Step 2: Reverse the first k elements
    reverse(k, n-1) // Step 3: Reverse the rest
}

func main() {
    nums := []int{1, 2, 3, 4, 5, 6, 7}
    rotate(nums, 3)
    fmt.Println(nums) // Output: [5, 6, 7, 1, 2, 3, 4]
}
