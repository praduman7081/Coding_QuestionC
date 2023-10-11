#include <iostream>
using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    while (n--)
    {
        int a;
        cin >> a;
        if (a % k == 0)
        {
            count++;
        }
       
    }
     cout << count;
    return 0;
}