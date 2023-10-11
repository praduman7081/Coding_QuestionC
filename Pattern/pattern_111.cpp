#include<iostream>
  using namespace std;

int main()
{
    int n,k,t=1;
    cin>>n;
    k=2*n-2;
    for(int i=1;i<=n/3;i++){
        
        for(int j=1;j<k;j++){
            cout<<" ";
        }
        k=k-2;
       if(i==1){
           cout<<"*"<<endl;
       }
        for(int j=1;j<=i;j++){
             if(j==1 && i==1){
                 for(int j=1;j<=(2*n)/3-1;j++){
                     cout<<"*"<<" ";
                 }
             }
            else if(j==1){
              cout<<"*"<<" ";
            }
            else if(j!=1&& j<i){
                cout<<"  ";
            }
            else{

                for(int j=1;j<=i;j++){
                  cout<<"  ";
                }

                for(int j=1;j<(2*n)/3-1;j++){
                    cout<<"*"<<" ";
                }
            }
            if(i==n/3){
                for(int j=1;j<=n;j++){
                cout<<"*"<<" ";

                }
            }

        }
        cout<<endl;
    }
    return 0;
}