#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, n, sum;
        cin>>d>>n;
        
        while(d--)
        {
            sum = n*(n+1)/2;
            n=sum;
        }
        cout<<sum<<endl;
    }
    return 0;
}