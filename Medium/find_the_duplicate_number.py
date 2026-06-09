# class Solution:
#     def findDuplicate(self, nums: List[int]) -> int:
#         nums_length = len(nums)
#         num_freq = {}
        
#         for i in nums:
#             num_freq [i] = num_freq.get(i, 0) + 1

#             if num_freq[i] > 1:
#                 return i
        
#         return -1

# class Solution:
#     def findDuplicate(self, nums: List[int]) -> int:
#         nums_length = len(nums)
#         nums.sort()
        
#         for i in range(0, nums_length - 1):
#             if nums[i] == nums[i + 1]:
#                 return nums[i]
        
#         return -1

# Floyd’s algorithm for the detection of cycle
class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        slow = fast = 0
        while True:
            slow = nums[slow]
            fast = nums[nums[fast]]
            if slow == fast:
                break
        
        temp_slow = 0
        while True:
            slow = nums[slow]
            temp_slow = nums[temp_slow]
            if slow == temp_slow:
                return slow
            
        
s = Solution()
print(s.findDuplicate([1,3,4,2,2]))
print(s.findDuplicate([3,1,3,4,2]))
print(s.findDuplicate([3,3,3,3,3]))