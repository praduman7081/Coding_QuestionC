#include<iostream>
  using namespace std;

int main()
{
    int n,k,t;
    cin>>n;
    k=2*n-2;
    for(int i=1;i<=n;i++){
        t=1;
        for(int j=1;j<=k;j++){
            cout<<" ";
        }
        k=k-2;
        for(int j=1;j<=2*i-1;j++){
         cout<<t<<" ";
           t++;
        }
        cout<<endl;
    }
    return 0;
}