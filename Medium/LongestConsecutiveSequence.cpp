#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;

        unordered_set<int> uSet(nums.begin(), nums.end());
        int finalAns = 0, count, tempNum;

        for (int item : uSet)
        {
            if (uSet.find(item - 1) == uSet.end())
            {
                tempNum = item;
                count = 1;

                while (uSet.find(tempNum + 1) != uSet.end())
                {
                    tempNum++;
                    count++;
                }

                finalAns = max(finalAns, count);
            }
        }

        return finalAns;
    }
};

int main()
{
    Solution s;

    vector<int> v = {9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6};

    cout << "Ans: " << s.longestConsecutive(v) << endl;

    return 0;
}