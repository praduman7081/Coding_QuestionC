#include<iostream>
#include<iomanip>
  using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        float a, b,te;
        cin>>a>>b;
        if(a>1000){

            te= (a*b-(a*b*.1));
            cout<<setprecision(6)<<fixed<<te<<endl;
        }
        else{

            te=a*b;
            cout<<setprecision(6)<<fixed<<te<<endl;
        }

    }
    return 0;
}