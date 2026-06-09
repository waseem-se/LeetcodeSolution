class Solution:
    def minimumSwaps(self, nums: list[int]) -> int:
        left = 0
        right = len(nums) - 1
        swap_count = 0
        
        while nums[right] == 0 and right > -1:
            right -= 1
                
        while left < right:
            if nums[left] == 0:
                swap_count += 1
                right -= 1
                
            while nums[right] == 0 and right > -1:
                right -= 1
            
            left += 1
            
        return swap_count
        
        
        
s = Solution()
print(s.minimumSwaps([0,1,0,3,12]))
print(s.minimumSwaps([0,1,0,2]))
print(s.minimumSwaps([1,2,0]))
print(s.minimumSwaps([0,0,0]))