#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfAlternatingGroups(vector<int> &colors, int k)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int finalAns = 0, flag, j, count = 0, size = colors.size();

        flag = colors[0];
        for (int i = 0; i < size + k - 1; i++)
        {
            if (colors[i % size] == flag)
                count++;
            else
                count = 1;

            flag = 1 - colors[i % size];

            if (count >= k)
                finalAns++;
        }

        return finalAns;
    }
};

int main()
{
    vector<int> v = {0, 1, 0, 0, 1, 0, 1};
    Solution s;

    cout << s.numberOfAlternatingGroups(v, 6);
    return 0;
}