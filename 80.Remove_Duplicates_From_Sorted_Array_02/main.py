class Solution:
    def removeDuplicates(self, nums):
        k = 0  # Pointer for the next valid position
        for num in nums:
            if k < 2 or num != nums[k - 2]:
                nums[k] = num
                k += 1
        return k  # Number of valid elements

# Example usage
solution = Solution()
nums = [0, 0, 1, 1, 1, 1, 2, 3, 3]
k = solution.removeDuplicates(nums)
print("Unique count:", k) # Output: 7
print("Modified array:", nums[:k]) # Output: [0, 0, 1, 1, 2, 3, 3]
