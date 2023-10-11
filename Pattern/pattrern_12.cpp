#include<iostream>
#include<cmath>
  using namespace std;

int main()
{
    int n, t=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<pow(2,t)<<" ";
             t++;
        }
        cout<<endl;
    }
    return 0;
}