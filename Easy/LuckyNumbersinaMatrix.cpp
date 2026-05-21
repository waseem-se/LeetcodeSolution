#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {

        vector<int> vMaxNumInCol;
        vector<int> vMinNumInRow;
        vector<int> finalAns;
        int i, j;

        int maxNumInCol, minNumInRow;

        for (i = 0; i < matrix.size(); i++)
        {
            minNumInRow = INT_MAX;
            for (j = 0; j < matrix[0].size(); j++)
            {
                minNumInRow = min(matrix[i][j], minNumInRow);
            }

            vMinNumInRow.push_back(minNumInRow);
        }

        for (i = 0; i < matrix[0].size(); i++)
        {
            maxNumInCol = INT_MIN;
            for (j = 0; j < matrix.size(); j++)
            {
                maxNumInCol = max(matrix[j][i], maxNumInCol);
            }

            vMaxNumInCol.push_back(maxNumInCol);
        }
        sort(vMinNumInRow.begin(), vMinNumInRow.end());
        sort(vMaxNumInCol.begin(), vMaxNumInCol.end());

        i = j = 0;

        while (i < vMinNumInRow.size() && j < vMaxNumInCol.size())
        {
            if (vMinNumInRow[i] == vMaxNumInCol[j])
            {
                finalAns.push_back(vMinNumInRow[i]);
                j++;
                i++;
            }
            else if (vMinNumInRow[i] < vMaxNumInCol[j])
                i++;
            else
                j++;
        }

        return finalAns;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> v = {{7, 8}, {1, 2}};
    vector<int> vec = s.luckyNumbers(v);

    for (int item : vec)
        cout << item << " ";
    return 0;
}