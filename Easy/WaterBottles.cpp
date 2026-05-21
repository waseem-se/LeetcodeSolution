#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int finalAns = numBottles;

        while (numBottles >= numExchange)
        {
            finalAns += (numBottles / numExchange);
            numBottles = (numBottles / numExchange) + (numBottles % numExchange);
        }

        return finalAns;
    }
};

int main()
{
    Solution s;
    cout << s.numWaterBottles(9, 3) << endl;
    cout << s.numWaterBottles(15, 4) << endl;
    return 0;
}