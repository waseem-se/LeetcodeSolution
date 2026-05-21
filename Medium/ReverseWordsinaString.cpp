#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        stack<string> st;
        string tempStr = "", finalAns = "";

        for (char item : s)
        {
            if (item == ' ')
            {
                if (tempStr != "")
                    st.push(tempStr);
                tempStr = "";
            }
            else
                tempStr += item;
        }

        if (tempStr != "")
            st.push(tempStr);

        while (!st.empty())
        {
            finalAns = (finalAns == "") ? st.top() : finalAns + " " + st.top();

            st.pop();
        }

        return finalAns;
    }
};

int main()
{
    Solution s;

    cout << s.reverseWords("  hello world  ");
    return 0;
}