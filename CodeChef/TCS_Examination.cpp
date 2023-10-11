#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        int b1,b2,b3;
        cin>>b1>>b2>>b3;
        int sum1=a1+a2+a3;
        int sum2=b1+b2+b3;
        if(sum1>sum2){
            cout<<"Dragon";
        }
        else if(sum1<sum2){
            cout<<"Sloth";
        }
        else if(sum1==sum2 && a1>b1) {
                cout<<"Dragon";
            }
        else if(sum1==sum2 && a1<b1){
                cout<<"Sloth";
            }
        else if(sum1==sum2 && a1==b1 && a2>b2){
            cout<<"Dragon";
        }
        else if(sum1==sum2 && a1==b1 && a2<b2){
            cout<<"Sloth";
        }
        else {
            cout<<"Tie";
        }
                  
               
            
        
    }
    return 0;
}