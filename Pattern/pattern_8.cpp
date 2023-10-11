#include<iostream>
  using namespace std;

int main()
{
    int n,k,t;
    cin>>n;
    t=n;
    k=2*n-2;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=k;j++){
        cout<<" ";
      }
      k=k-2;
    for(int j=1;j<=2*i-1;j++){
        if(j==i){
          cout<<"0"<<" ";
        }
       else if(j<i){
           cout<<t-i+1<<" ";
           t++;
        }
        else{
          cout<<t-i<<" ";
          t--;
        }
     

      }
      cout<<endl;
    }

    return 0;
}