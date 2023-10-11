#include<iostream>
  using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        double x,y,z;
        cin>>x>>y>>z;
        if((x+y)>z){
            cout<<"TRAIN";
        }
        else if((x+y)<z){
            cout<<"PLANEBUS";
        }
        else{
            cout<<"EQUAL";
        }

    }
    return 0;
}