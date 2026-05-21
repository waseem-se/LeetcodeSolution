#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string losingPlayer(int x, int y)
    {

        int isAlice = 0, tempNum, tempNum2;

        while (x >= 0 && y >= 0)
        {
            x--;
            y -= 4;

            if (x >= 0 && y >= 0)
                isAlice = 1 - isAlice;
        }

        return isAlice ? "Alice" : "Bob";
    }
};

int main()
{
    Solution s;
    cout << s.losingPlayer(1, 8) << endl;
    cout << s.losingPlayer(4, 11) << endl;
    cout << s.losingPlayer(3, 12) << endl;

    return 0;
}