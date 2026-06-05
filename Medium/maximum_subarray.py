class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        sum = 0
        maximum_subarray_sum = float("-inf")

        for i in range(len(nums)):
            sum += nums[i]
            maximum_subarray_sum = max(maximum_subarray_sum, sum)
            sum = 0 if sum < 0 else sum

        return maximum_subarray_sum


s = Solution()
print(s.maxSubArray([5, 4, -1, 7, 8]))
print(s.maxSubArray([1]))
print(s.maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4]))
