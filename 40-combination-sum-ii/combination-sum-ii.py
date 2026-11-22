class Solution:
    def combinationSum2(self, candidates: list[int], target: int) -> list[list[int]]:
        #your code goes here
        candidates.sort()
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
        self._solve(index + 1, current, candidates, n, target - candidates[index], ans)
        current.pop()
        for i in range(index + 1, n):
            if candidates[i] != candidates[index]:
                self._solve(i, current, candidates, n, target, ans)
                break
