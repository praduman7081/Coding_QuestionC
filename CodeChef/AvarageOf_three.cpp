#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int avg = x*3;
        int b = (avg)/2;
        int c = b/2;
        int d = avg-(b+c);
        if(x==2){
            cout<<1<<" "<<2<<" "<<3<<endl;
        }
        else if(x==3){
            cout<<2<<" "<<2<<" "<<5<<endl;
        }
        else{
        cout<<b <<" " <<c <<" "<< d<<endl;

        }


    }
    return 0;
}