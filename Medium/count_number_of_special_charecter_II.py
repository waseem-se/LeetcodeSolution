class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        lower_letter = set()
        capital_letter = set()

        for item in word:
            if item.islower():
                if item not in capital_letter:
                    lower_letter.add(item)
                else:
                    lower_letter.discard(item)
            else:
                capital_letter.add(item.lower())
                
        return len(lower_letter.intersection(capital_letter))
        
s = Solution()
print(s.numberOfSpecialChars("abcde")) 
