class Solution:
    def removeDuplicates(self, nums):
        k = 0  # Index for the next unique element
        for i in range(1, len(nums)):
            if nums[i] != nums[k]:
                k += 1
                nums[k] = nums[i]
        return k + 1  # Return the count of unique elements

# Example usage
solution = Solution()
nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
k = solution.removeDuplicates(nums)
print("Unique count:", k) # Output: 5
print("Modified array:", nums[:k]) # Output: [0, 1, 2, 3, 4]
