#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        int cnt = 0;
        queue<int> st;
        queue<int> sand;

        for (int item : students)
            st.push(item);

        for (int item : sandwiches)
            sand.push(item);

        while (!st.empty())
        {
            if (st.front() == sand.front())
            {
                cnt = 0;
                st.pop();
                sand.pop();
            }
            else
            {
                cnt++;
                st.push(st.front());
                st.pop();
            }

            if (cnt >= st.size())
                break;
        }

        return st.size();
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