#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int cnt1 = 0, cnt0 = 0;
        for (int item : students)
        {
            if (item)
                cnt1++;
            else
                cnt0++;
        }

        for (int item : sandwiches)
        {
            if (item)
            {
                if (cnt1 > 0)
                    cnt1--;
                else
                    break;
            }
            else
            {
                if (cnt0 > 0)
                    cnt0--;
                else
                    break;
            }
        }

        return cnt0 + cnt1;
    }
};

int main()
{

    Solution s;

    vector<int> st = {1, 1, 1, 0, 0, 1};
    vector<int> sand = {1, 0, 0, 0, 1, 1};
    cout << s.countStudents(st, sand) << endl;

    st = {1, 1, 0, 0};
    sand = {0, 1, 0, 1};
    cout << s.countStudents(st, sand) << endl;
    return 0;
}