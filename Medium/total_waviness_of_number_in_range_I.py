class Solution:
    def totalWaviness(self, num1: int, num2: int) -> int:
        total_waviness = 0

        for item in range(num1, num2 + 1):
            current = item

            while current >= 100:
                temp_item = current

                digit_at_ones = temp_item % 10
                temp_item //= 10

                digit_at_tens = temp_item % 10
                temp_item //= 10

                digit_at_hundred = temp_item % 10

                if (digit_at_ones < digit_at_tens > digit_at_hundred) or (
                    digit_at_ones > digit_at_tens < digit_at_hundred
                ):
                    total_waviness += 1

                current //= 10

        return total_waviness


s = Solution()
print(s.totalWaviness(120, 130))  # 3
print(s.totalWaviness(198, 202))  # 3
print(s.totalWaviness(4848, 4848))  # 2
print(s.totalWaviness(2121, 2122))  # 3
