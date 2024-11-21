class ValidPalindrome:
    def is_palindrome(self, s: str) -> bool:
        left, right = 0, len(s) - 1
        while left < right:
            while left < right and not self.is_alphanumeric(s[left]):
                left += 1
            while left < right and not self.is_alphanumeric(s[right]):
                right -= 1
            if self.to_lower(s[left]) != self.to_lower(s[right]):
                return False
            left += 1
            right -= 1
        return True

    def is_alphanumeric(self, c: str) -> bool:
        return c.isalnum()

    def to_lower(self, c: str) -> str:
        return c.lower()

if __name__ == "__main__":
    validator = ValidPalindrome()
    s = "A man, a plan, a canal: Panama"
    print(validator.is_palindrome(s))  # Output: true
