class Solution:
    def subsets(self, nums: list[int]) -> list[list[int]]:
        n = len(nums)
        ans = []
        current = []
        self._build_power_set(nums, n, 0, current, ans)
        return ans
    
    def _build_power_set(self, nums, n, index, current, ans):
        if index == n:
            ans.append(current[:])
            return
        current.append(nums[index])
        self._build_power_set(nums, n, index + 1, current, ans)
        current.pop()
        self._build_power_set(nums, n, index + 1, current, ans)
