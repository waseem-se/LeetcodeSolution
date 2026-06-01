class Solution:
    def asteroidsDestroyed(self, mass: int, asteroids: List[int]) -> bool:
        asteroids.sort()
        update_mass = mass
        for item in asteroids:
            if item > update_mass:
                return False
            update_mass += item
        return True
    
s = Solution()
print(s.asteroidsDestroyed(10, [3,9,19,5,21]))
print(s.asteroidsDestroyed(5, [4,9,23,4]))