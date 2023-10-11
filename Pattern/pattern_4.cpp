#include<iostream>
  using namespace std;

int main()
{
    int n,k;
    cin>>n;
    k=2*n-2;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=k;j++){
            cout<<"  ";
        }
        k=k-1;
        for(int j=1;j<=i;j++){
         cout<<"*"<<"   ";

        }
        cout<<endl;
    }
    return 0;
}