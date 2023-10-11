#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int ans=0;
        cin >> n;
       long int A[n], B[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> B[j];
        }

        for(int i=0; i<n; i++){
            if(i==0 && A[i]>=B[i]){
               ans++;
            } 
            else if(A[i]-A[i-0]>=B[i]){
                ans++;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}