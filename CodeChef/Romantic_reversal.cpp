#include<iostream>
#include<string>
  using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,temp,m;
        
        cin>>x>>y;
        m=y;
        string str;
        for(int i=0;i<x;i++){
            cin>>str[i];
        }
        for(int i=0;i<m;i++){
            temp=str[y-1];
            str[y-1]=str[y-2];
            str[y-2]=temp;
            y--;
        }
        for(int i=0;i<x;i++){
            cout<<str[i];
        }

    }
    return 0;
}