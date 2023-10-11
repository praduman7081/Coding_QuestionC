#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
       long int n;
       cin>>n;
       if(n==1){
           cout<<7<<endl;
       }
       else{
           for(int i=0; i<n; i++){
               cout<<1*pow(2,i)<<" ";
           }
           cout<<endl;
       }
    }
    return 0;
}