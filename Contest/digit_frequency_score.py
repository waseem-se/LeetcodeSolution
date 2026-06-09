from collections import defaultdict


class Solution:
    def digitFrequencyScore(self, n: int) -> int:
        final_ans = 0
        hash_map = defaultdict(int)
        while n:
            hash_map[n % 10] += 1
            n //= 10
        for key, value in hash_map.items():
            final_ans += key*value

        return final_ans
            
s = Solution()

print(s.digitFrequencyScore(66))