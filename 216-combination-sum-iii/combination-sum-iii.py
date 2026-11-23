class Solution:
    def combinationSum3(self, k: int, n: int) -> list[list[int]]:
        ans = []
        nums = [1, 2, 3, 4, 5, 6, 7, 8, 9]
        self._solve(0, nums, 9, [], k, n, ans)
        return ans

    def _solve(self, index, nums, size_of_nums, current, target_size, target_sum, ans):
        if target_sum == sum(current) and len(current) == target_size:
            ans.append(current.copy())
            return
        if target_sum < sum(current) or len(current) > target_size:
            return
        if index >= size_of_nums:
            return
        current.append(nums[index])
        self._solve(index + 1, nums, size_of_nums, current, target_size, target_sum, ans)
        current.pop()
        self._solve(index + 1, nums, size_of_nums, current, target_size, target_sum, ans)
