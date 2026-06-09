from collections import defaultdict
from typing import List


class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        temp_dict = defaultdict(list)
        
        for item in strs:
            sorted_item = ''.join(sorted(item))
            temp_dict[sorted_item].append(item)
            
        return list(temp_dict.values())
            
            
s = Solution()

print(s.groupAnagrams(["eat","tea","tan","ate","nat","bat"]))