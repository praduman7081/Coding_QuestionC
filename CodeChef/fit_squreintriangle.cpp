#include<iostream>
  using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int b,count=0;
        cin>>b;
        if(b<4){
            cout<<"0"<<endl;
        }
        else{
            for(int i=b;i>=4;i-=2){
               count=count+(i/2-1);
            }
        cout<<count<<endl;

        }
    }
    return 0;
}