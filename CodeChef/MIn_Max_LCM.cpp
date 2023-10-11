#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       long long int a, b, min, max;
        cin >> a >> b;
        min = 2 * a;
        max = (a * b - 1) * (a * b);

        cout << min << " " << max << endl;
    }
    return 0;
}