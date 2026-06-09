class Solution:
    def minElement(self, nums: List[int]) -> int:
        min_sum_digit = float('inf')
        
        for item in nums:
            temp_value = item
            digit_sum = 0
            
            while temp_value:
                digit_sum += (temp_value % 10)
                temp_value //= 10
                
            min_sum_digit = min(min_sum_digit, digit_sum)
        
        
        return round(min_sum_digit, 0)
    
    
s = Solution()
print(s.minElement([10,12,13,14]))
print(s.minElement([1,2,3,4]))
print(s.minElement([999,19,199]))