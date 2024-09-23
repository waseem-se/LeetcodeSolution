#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> umap;
        vector<int> finalAns;

        for (int item : nums)
            umap[item]++;

        vector<pair<int, int>> pairs(umap.begin(), umap.end());

        sort(pairs.begin(), pairs.end(),
             [](pair<int, int> &a, pair<int, int> &b)
             {
                 return a.second > b.second;
             });

        while (k--)
        {
            finalAns.push_back(pairs[k].first);
        }

        return finalAns;
    }
};

int main()
{
    Solution s;

    vector<int> vec = {4, 4, 4, 4, 4, 4, 4, 4, 3, 1, 1, 1, 2, 2, 3};

    vector<int> ans;

    ans = s.topKFrequent(vec, 2);

    for (int item : ans)
    {
        cout << item << " ";
    }

    return 0;
}