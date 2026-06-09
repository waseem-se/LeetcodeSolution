class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        operand_stack = []
        valid_operators = {"+", "-", "*", "/"}
        for item in tokens:
            if item in valid_operators:
                second_token = operand_stack.pop()
                first_token = operand_stack.pop()
                evaluated_value = self._perform_calculation(
                    item, first_token, second_token
                )
                operand_stack.append(evaluated_value)
            else:
                operand_stack.append(int(item))

        return operand_stack[-1]

    def _perform_calculation(self, operator, first_token, second_token):
        match operator:
            case "+":
                return first_token + second_token
            case "-":
                return first_token - second_token
            case "*":
                return first_token * second_token
            case "/":
                return int(first_token / second_token)
            case _:
                return 0


s = Solution()
print(s.evalRPN(["2", "1", "+", "3", "*"]))
print(s.evalRPN(["4", "13", "5", "/", "+"]))
print(s.evalRPN(["6", "-126", "/"]))
print(s.evalRPN(["10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"]))
