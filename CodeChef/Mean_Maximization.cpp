#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n], sum= 0;
        for(int i=0; i<n; i++){
            cin>>ar[i];
            sum += ar[i];
        }
        int mx = *max_element(ar, ar+n);
        double p =(double)(sum-mx)/(n-1);
        p = p +mx;
        cout<<fixed <<setprecision(10)<<p<<"\n";
    }
    return 0;
}