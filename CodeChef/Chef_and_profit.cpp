#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
       long int X, Y ,Z;
       cin>>X>>Y>>Z;
       cout<<(Z*X)-(Y*X)<<endl; 
    }
    return 0;
}