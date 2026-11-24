class Solution:
    def solveNQueens(self, n: int) -> list[list[str]]:
        ans = []
        board = [['.' for _ in range(n)] for _ in range(n)]
        self._place_n_queens(0, board, ans)
        return ans

    def _place_n_queens(self, row, board, ans):
        if row == len(board):
            ans.append(["".join(r) for r in board])
            return
        for col in range(len(board[0])):
            if self._placement_possible(board, row, col):
                board[row][col] = 'Q'
                self._place_n_queens(row + 1, board, ans)
                board[row][col] = '.'

    def _placement_possible(self, board, row, col):
        r, c = row, col
        while r >= 0:
            if board[r][c] == 'Q':
                return False
            r -= 1
        r, c = row, col
        while r >= 0 and c < len(board[0]):
            if board[r][c] == 'Q':
                return False
            r -= 1
            c += 1
        r, c = row, col
        while r >= 0 and c >= 0:
            if board[r][c] == 'Q':
                return False
            r -= 1
            c -= 1
        return True
