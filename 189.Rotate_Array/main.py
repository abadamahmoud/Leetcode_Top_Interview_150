def rotate(nums: list[int], k: int) -> None:
    n = len(nums)
    k %= n  # Handle cases where k >= n

    def reverse(start: int, end: int) -> None:
        while start < end:
            nums[start], nums[end] = nums[end], nums[start]
            start += 1
            end -= 1

    reverse(0, n - 1)  # Step 1: Reverse the entire array
    reverse(0, k - 1)  # Step 2: Reverse the first k elements
    reverse(k, n - 1)  # Step 3: Reverse the rest

# Example usage
nums = [1, 2, 3, 4, 5, 6, 7]
rotate(nums, 3)
print(nums)  # Output: [5, 6, 7, 1, 2, 3, 4]
