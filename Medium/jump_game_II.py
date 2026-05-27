class Solution:
    def jump(self, nums: List[int]) -> bool:
        jump_count = 0
        left = right = 0
        
        while right < len(nums) - 1:
            far_most = 0
            for i in range(left, right + 1):
                far_most = max(far_most, i + nums[i])
            left = right + 1
            right = far_most
            jump_count += 1
            
        return jump_count 
    
s = Solution()
# print(s.jump([2,3,1,1,4]))
# print(s.jump([2,3,0,1,4]))
# print(s.jump([2,3,1]))
# print(s.jump([1]))
print(s.jump([1,1,1,1]))