#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> finalAns(2);
        int start = 0, end = numbers.size() - 1;

        while (start < end)
        {
            if (numbers[start] + numbers[end] == target)
                break;
            else if (numbers[start] + numbers[end] > target)
                end--;
            else
                start++;
        }

        finalAns[0] = start + 1;
        finalAns[1] = end + 1;
        return finalAns;
    }
};

int main()
{
    Solution s;

    vector<int> v = {2, 7, 11, 15};
    vector<int> ans = s.twoSum(v, 9);

    for (int item : ans)
    {
        cout << item << " ";
    }
}