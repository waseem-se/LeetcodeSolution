#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string largestNumber(vector<int> &nums)
    {
        string finalAns = "";

        if (all_of(nums.begin(), nums.end(), [](int i)
                   { return i == 0; }))
            return "0";

        sort(nums.begin(), nums.end(),
             [](int a, int b)
             {
                 string strA = to_string(a);
                 string strB = to_string(b);
                 return strA + strB > strB + strA;
             });

        for (auto item : nums)
        {
            finalAns += to_string(item);
        }

        return finalAns;
    }
};

int main()
{
    Solution s;
    vector<int> v = {131, 13};
    cout << s.largestNumber(v) << endl;
    return 0;
}