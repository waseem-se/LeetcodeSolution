#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        vector<int> finalAns;
        set<int> tempSet;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] == nums2[j])
            {
                tempSet.insert(nums1[i]);
                i++;
                j++;
            }
            else
            {
                if (nums1[i] > nums2[j])
                    j++;
                else
                    i++;
            }
        }

        for (auto item : tempSet)
            finalAns.push_back(item);

        return finalAns;
    }
};

int main()
{
    Solution s;
    vector<int> v1 = {1, 2, 2, 1};
    vector<int> v2 = {2, 2};

    vector<int> finalAns = s.intersection(v1, v2);

    for (int item : finalAns)
        cout << item << " ";

    return 0;
}