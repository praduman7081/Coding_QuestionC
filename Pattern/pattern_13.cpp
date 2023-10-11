#include<iostream>
#include<cmath>
  using namespace std;

int main()
{
    int n,t=1,r=1;
    cin>>n;
    cout<<"1"<<" "<<"1"<<" ";
    for(int i=1;i<=2*n-2;i++){
        if(i%2==0){
            cout<<pow(3,t)<<" ";
            t++;
        }
        else{
            cout<<pow(2,r)<<" ";
            r++;
        }
    }
    return 0;
}