class Solution:
    def combinationSum(self, candidates: list[int], target: int) -> list[list[int]]:
        n = len(candidates)
        ans = []
        self._solve(0, [], candidates, n, target, ans)
        return ans

    def _solve(self, index, current, candidates, n, target, ans):
        if target == 0:
            ans.append(current[:])
            return 
        if target < 0 or index == n:
            return
        current.append(candidates[index])
        self._solve(index, current, candidates, n, target - candidates[index], ans)
        current.pop()
        self._solve(index + 1, current, candidates, n, target, ans)