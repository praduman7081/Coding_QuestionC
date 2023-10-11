#include <iostream>
using namespace std;

int Octaltodecimal(int n)
{
    int ans = 0;
    int x = 1, y;
    while (n > 0)
    {
        y = n % 10;
        ans = x * y;
        x *= 8;
        n = n / 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter number to convert decimal" << endl;
    cin >> n;
    cout << Octaltodecimal(n);
    return 0;
}