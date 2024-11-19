package main

import "fmt"

func merge(nums1 []int, m int, nums2 []int, n int) {
    i, j, k := m-1, n-1, m+n-1

    // Start from the end and fill nums1
    for i >= 0 && j >= 0 {
        if nums1[i] > nums2[j] {
            nums1[k] = nums1[i]
            i--
        } else {
            nums1[k] = nums2[j]
            j--
        }
        k--
    }

    // Copy remaining elements of nums2 if any
    for j >= 0 {
        nums1[k] = nums2[j]
        k--
        j--
    }
}

func main() {
    nums1 := []int{1, 2, 3, 0, 0, 0}
    nums2 := []int{2, 5, 6}
    m, n := 3, 3

    merge(nums1, m, nums2, n)

    fmt.Println("Merged array:", nums1)
}
