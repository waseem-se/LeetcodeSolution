class Solution:
    def check(self, nums: List[int]) -> bool:
        len_nums = len(nums)
        drop_count = 0

        for i in range(len_nums):
            if nums[i] > nums[(i + 1) % len_nums]:
                 drop_count += 1
            
            if drop_count > 1:
                return False
            
            
        return True
        
        
        
s = Solution()
print(f"{s.check([2,1,2,1])}")