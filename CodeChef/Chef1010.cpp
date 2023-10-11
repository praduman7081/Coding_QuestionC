#include<iostream>
#include<string>
  using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x=0,y=0;
        cin>>n;
        string str;
        for(int i=0;i<n;i++){
            cin>>str[i];
            if(str[i]=='1'){
                x++;
            }
            else{
                y++;
            }
            
        }
        
        
        if(x<2 || y<2){
            cout<<"0"<<endl;
        }
        else{

       if(x==y){
            cout<<x-1<<endl;
        }
        else if(x>y){
            cout<<y-1<<endl;
        }
        else{
            cout<<x-1<<endl;
        }
        }
        

    }
    return 0;
}