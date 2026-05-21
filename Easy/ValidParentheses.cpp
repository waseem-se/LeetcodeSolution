#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (char item : s)
        {
            switch (item)
            {
            case ')':
                if (st.empty())
                    return false;
                else if (st.top() != '(')
                    return false;
                st.pop();
                break;

            case '}':
                if (st.empty())
                    return false;
                else if (st.top() != '{')
                    return false;
                st.pop();
                break;

            case ']':
                if (st.empty())
                    return false;
                else if (st.top() != '[')
                    return false;
                st.pop();
                break;

            default:
                st.push(item);
                break;
            }
        }

        return st.empty();
    }
};

int main()
{
    Solution s;
    cout << s.isValid("([])") << endl;
    cout << s.isValid("}") << endl;
    cout << s.isValid("[") << endl;
    return 0;
}