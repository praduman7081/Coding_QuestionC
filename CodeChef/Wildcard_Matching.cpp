#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i = 0, l, x = 0, y = 0;
        string s1, s2;
        cin >> s1 >> s2;
        l = s1.size();
        while (l--)
        {

            if (s1[i] != s2[i])
            {
                if (s1[i] == '?' || s2[i] == '?')
                {
                    y++;
                }
                else
                {
                    x++;
                    break;
                }
            }
            else
            {
                y++;
            }
            i++;
        }
        if (y == s1.size())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
