class Solution:
    def canJump(self, nums: List[int]) -> bool:
        curr_index = len(nums) - 1

        for i in range(len(nums)-1, -1, -1):
            if i + nums[i] >= curr_index:
                curr_index = i


        return True if curr_index == 0 else False
        
        
s = Solution()
print(s.canJump([2,3,1,1,4]))