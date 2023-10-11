#include <bits/stdc++.h>
using namespace std;

int decimaltohexadecimal(string n)
{
    int x = 1;
    string ans =  " ";
    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;
    while (x > 0)
    {
        int lastdigit = n / x;
        n = n - lastdigit * x;
        x /= 16;
        if (lastdigit <= 9)
        {
            ans = ans + to_string(lastdigit);
        }
        else
        {
            char c = 'A' + (lastdigit - 10);
            ans.push_back(c);
        }
    }
    return ans;
}

int main()
{
    string n;
    cout << "Enter the number to convert into Hexadecimal" << endl;
    cin >> n;
    cout << decimaltohexadecimal(n);
    return 0;
}