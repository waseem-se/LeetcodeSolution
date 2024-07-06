#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maximumPoints(vector<int> &enE, int currentEnergy)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int i = 0, j = enE.size() - 1, minElement = INT_MAX;
        long long finalAns = 0, allSum = 0;

        if (enE.size() == 1)
            return currentEnergy / enE[0];

        if (currentEnergy == 0)
            return 0;

        for (auto item : enE)
        {
            minElement = min(minElement, item);
            allSum += item;
        }
        allSum -= minElement;

        while (minElement <= currentEnergy)
        {
            finalAns++;
            currentEnergy -= minElement;
        }
        if (finalAns)
        {
            allSum += currentEnergy;
            finalAns = allSum / minElement;
        }

        return finalAns;
    }
};

int main()
{
    vector<int> v = {3, 2, 2};
    Solution s;
    cout << s.maximumPoints(v, 2) << endl;
    return 0;
}