#include <iostream>
using namespace std;

int main()
{
    long long t,i, n, m;;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        
        if (n > m)
        {
            cout << 3*n-m << endl;
             cout<<"0";
            for ( i = 1; i <=m+1; i++)
            {
                cout<<"10";
            }
            for ( i = 1; i <=n-m-1; i++)
            {
                cout<<"010";
            }
            cout<<"\n";
             
        }
        else if (n < m)
        {
            cout<<3*m-n<<"\n";
            cout<<"1";
            for ( i = 1; i <= n+1; i++)
            {
              cout<<"01";
            }
            for ( i = 1; i <= m-n-1; i++)
            {
              cout<<"101";
            }
            cout<<"\n";
        }
        else
        {
            cout<<(n+1)*2<<"\n";
            for ( i = 1; i <=n + 1; i++)
            {
              cout<<"01";
            }
             cout<<endl;
        }
    }
    return 0;
}