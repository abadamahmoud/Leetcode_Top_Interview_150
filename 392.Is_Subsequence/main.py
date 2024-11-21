class Solution:
    def is_subsequence(self, s: str, t: str) -> bool:
        s_index, t_index = 0, 0
        while s_index < len(s) and t_index < len(t):
            if s[s_index] == t[t_index]:
                s_index += 1
            t_index += 1
        return s_index == len(s)

if __name__ == "__main__":
    solution = Solution()
    s = "abc"
    t = "ahbgdc"
    print(solution.is_subsequence(s, t))  # Output: true
