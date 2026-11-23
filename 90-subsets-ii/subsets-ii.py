class Solution:
    def subsetsWithDup(self, nums: list[int]) -> list[list[int]]:
        nums.sort()
        n = len(nums)
        ans = []
        self._solve(0, nums, n, [], ans)
        return ans

    def _solve(self, index, nums, n, current_arr, ans):
        if index == n:
            ans.append(current_arr[:])
            return
        current_arr.append(nums[index])
        self._solve(index + 1, nums, n, current_arr, ans)
        current_arr.pop()

        for i in range(index + 1, n):
            if nums[i] != nums[index]:
                self._solve(i, nums, n, current_arr, ans)
                return
        self._solve(n, nums, n, current_arr, ans)
