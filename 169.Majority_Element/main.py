class Solution:
    def majorityElement(self, nums):
        candidate, count = 0, 0
        for num in nums:
            if count == 0:
                candidate = num
            count += 1 if num == candidate else -1
        return candidate

# Example usage
solution = Solution()
nums1 = [3, 2, 3]
nums2 = [2, 2, 1, 1, 1, 2, 2]

print("Majority element in nums1:", solution.majorityElement(nums1)) # Output: 3
print("Majority element in nums2:", solution.majorityElement(nums2)) # Output: 2
