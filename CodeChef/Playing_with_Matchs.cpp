#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){

      long  int  A,B;
      cin>>A>>B;
      int sum = A+B;
      int ans =0;
      while(sum>0){
          int temp ;
          temp =sum%10;
          if(temp == 0 ||temp == 6 || temp ==9){
             ans+= 6;
          }
          else if(temp ==2 || temp == 3 || temp ==5){
              ans+=5;
          }
          else if(temp ==4){
              ans+=4;
          }

          else if(temp == 8){
              ans+=7;
          }
          else if(temp == 7){
              ans+=3;
          }

          else{
              ans+=2;
          }
          sum= sum/10;
      }

      cout<<ans<<endl;

    }
    return 0;
}