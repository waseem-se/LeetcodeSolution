class Solution:
    def minimumCost(self, cost: List[int]) -> int:
        cost.sort(reversed=True)
        minimum_cost = 0
        
        for i in range(len(cost)):
            if i % 3 != 2:
                minimum_cost += cost[i]    
        
        return minimum_cost
    