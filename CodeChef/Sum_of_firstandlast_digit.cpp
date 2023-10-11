#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num, rem, sum = 0;
        cin >> num;
        sum = num % 10;
        num = num / 10;
        while (num > 0)
        {
            num = num / 10;

            if (num >= 0 && num <= 9)
            {
                sum += num;
            }
        }
        cout << sum << endl;
    }
    return 0;
}