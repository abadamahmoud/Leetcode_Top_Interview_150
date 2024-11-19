def main():
    nums = [0, 1, 2, 2, 3, 0, 4, 2]
    val = 2
    solution = Solution()
    k = solution.removeElement(nums, val)
    print("k =", k)
    print("Modified nums =", nums[:k])

class Solution:
    def removeElement(self, nums, val):
        k = 0
        for num in nums:
            if num != val:
                nums[k] = num
                k += 1
        return k

if __name__ == "__main__":
    main()
