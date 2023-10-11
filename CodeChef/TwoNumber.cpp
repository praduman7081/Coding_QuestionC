#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int a,b,n;
        cin>>a>>b>>n;
       long long int x,y;
        if(n%2==0){
           x = n/2;
           y = n/2;
        }

        else{
            x = (n+1)/2;
            y= n/2;
        }

        a = a*pow(2,x);
        b = b*pow(2,y);

        if(a>b){
            cout<<a/b<<endl;
        }
        else{
            cout<<b/a<<endl;
        }
    }
    return 0;
}