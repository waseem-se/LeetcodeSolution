class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        divided_string = []
        extra_char_needed = k - (len(s) % k)
        
        for i in range(0, len(s), k):
            temp_str = s[i: i + k]
            if len(temp_str) < k:
                temp_str += fill * extra_char_needed
            divided_string.append(temp_str)
            
        return divided_string
        
        
        
s = Solution()
print(s.divideString("qwertyui", 3, "x"))