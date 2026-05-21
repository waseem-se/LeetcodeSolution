#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<string> &logs)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int finalAns = 0;

        for (string item : logs)
        {
            if (item == "../")
                finalAns = finalAns == 0 ? 0 : finalAns - 1;
            else if (item != "./")
            {
                cout << item << endl;
                finalAns++;
            }
        }

        return finalAns;
    }
};

int main()
{
    vector<string> v = {"d1/", "d2/", "./", "d3/", "../", "d31/"};
    Solution s;
    // cout << s.minOperations(v) << endl;
    v = {"d1/", "../", "../", "../"};
    cout << s.minOperations(v) << endl;

    return 0;
}