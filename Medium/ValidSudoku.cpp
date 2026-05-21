#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        return isRowValid(board) && isColumnValid(board) && isGridValid(board);
    }

private:
    bool isRowValid(vector<vector<char>> board)
    {
        unordered_map<char, int> umap;

        for (auto boardRow : board)
        {
            for (char item : boardRow)
                umap[item]++;

            for (auto item : umap)
            {
                if (item.first >= '1' &&
                    item.first <= '9' &&
                    item.second > 1)
                    return false;
            }

            umap.clear();
        }

        return true;
    }

    bool isColumnValid(vector<vector<char>> board)
    {
        unordered_map<char, int> umap;

        for (int i = 0; i < board[0].size(); i++)
        {
            for (int j = 0; j < board.size(); j++)
                umap[board[j][i]]++;

            for (auto item : umap)
            {
                if (item.first >= '1' &&
                    item.first <= '9' &&
                    item.second > 1)
                    return false;
            }

            umap.clear();
        }
        return true;
    }

    bool isGridValid(vector<vector<char>> board)
    {
        int noOfGrid = 9, i = 0, j = 0;
        bool moveRowIdx = true;
        unordered_map<char, int> umap;

        while (noOfGrid--)
        {
            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 3; l++)
                {
                    umap[board[k + i][l + j]]++;
                }
            }

            for (auto item : umap)
            {
                if (item.first >= '1' &&
                    item.first <= '9' &&
                    item.second > 1)
                    return false;
            }

            umap.clear();

            if (j == 6)
            {
                j = (j + 3) % 9;
                i = (i + 3) % 9;
            }
            else
                j = (j + 3) % 9;
        }

        return true;
    }
};

int main()
{
    Solution s;
    vector<vector<char>> vvC = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '3', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    cout << "Is Valid: " << s.isValidSudoku(vvC) << endl;

    vvC = {
        {'8', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    cout << "Is Valid: " << s.isValidSudoku(vvC) << endl;
    return 0;
}