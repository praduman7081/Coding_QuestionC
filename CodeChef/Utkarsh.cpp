#include<iostream>
  using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
         char a,b,c;
        cin>>a>>b>>c;
        char x,y;
        cin>>x>>y;
        if(a==x)
        {
            cout<<a<<endl;
           
        }
        else if(a==y){
            cout<<a<<endl;
            
        }
        else{
            if(b==x){
                cout<<b<<endl;
            }
            else{
                cout<<b<<endl;
            }
        }
    }
    return 0;
}