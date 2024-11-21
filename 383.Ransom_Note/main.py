class Solution:
    def can_construct(self, ransom_note: str, magazine: str) -> bool:
        freq = [0] * 26
        for char in magazine:
            freq[ord(char) - ord('a')] += 1
        for char in ransom_note:
            if freq[ord(char) - ord('a')] == 0:
                return False
            freq[ord(char) - ord('a')] -= 1
        return True

if __name__ == "__main__":
    solution = Solution()
    ransom_note = "aa"
    magazine = "aab"
    print(solution.can_construct(ransom_note, magazine))  # Output: true
