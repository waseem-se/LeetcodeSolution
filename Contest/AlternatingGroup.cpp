#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfAlternatingGroups(vector<int> &colors)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int finalAns = 0;
        for (int i = 1; i < colors.size() - 1; i++)
        {
            if (colors[i - 1] != colors[i] && colors[i] != colors[i + 1])
                finalAns++;
        }

        if (colors[0] != colors[1] && colors[0] != colors[colors.size() - 1])
            finalAns++;

        if (colors[colors.size() - 2] != colors[colors.size() - 1] && colors[0] != colors[colors.size() - 1])
            finalAns++;

        return finalAns;
    }
};

int main()
{
    vector<int> v = {0, 1, 0};
    Solution s;

    cout << s.numberOfAlternatingGroups(v);
    return 0;
}