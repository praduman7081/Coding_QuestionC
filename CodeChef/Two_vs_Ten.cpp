#include <iostream>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
     long int  n ,count=0;
     cin>>n;
     if(n%5==0){
         while(n%10!=0){
             count++;
             n=n*2;
         }
         cout<<count<<endl;
         
     }
     else{
         cout<<"-1"<<endl;
     }
 }
	return 0;
}
