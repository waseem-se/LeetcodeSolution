#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int passThePillow(int n, int time)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int flowDir = time / (n - 1);
        return flowDir % 2 == 0 ? (time) % (n - 1) + 1 : n - (time) % (n - 1);
    }
};

int main()
{
    Solution s;
    cout << s.passThePillow(18, 52) << endl;
    cout << s.passThePillow(4, 5) << endl;
    cout << s.passThePillow(3, 2) << endl;
    return 0;
}