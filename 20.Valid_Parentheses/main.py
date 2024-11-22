class Solution:
    def is_valid(self, s: str) -> bool:
        stack = []
        for char in s:
            if char in "({[":
                stack.append(char)  # Push to stack
            else:
                if not stack:
                    return False
                top = stack.pop()  # Pop from stack
                if (char == ')' and top != '(') or \
                   (char == '}' and top != '{') or \
                   (char == ']' and top != '['):
                    return False
        return not stack

if __name__ == "__main__":
    solution = Solution()
    s = "({[]})"
    print("Is Valid:", solution.is_valid(s))  # Output: True
