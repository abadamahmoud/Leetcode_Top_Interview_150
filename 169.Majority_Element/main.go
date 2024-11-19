package main

import "fmt"

func majorityElement(nums []int) int {
    candidate, count := 0, 0
    for _, num := range nums {
        if count == 0 {
            candidate = num
        }
        if num == candidate {
            count++
        } else {
            count--
        }
    }
    return candidate
}

func main() {
    nums1 := []int{3, 2, 3}
    nums2 := []int{2, 2, 1, 1, 1, 2, 2}

    fmt.Println("Majority element in nums1:", majorityElement(nums1)) // Output: 3
    fmt.Println("Majority element in nums2:", majorityElement(nums2)) // Output: 2
}
