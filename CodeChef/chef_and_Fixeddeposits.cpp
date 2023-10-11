#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
     cin>>t;
     
     while(t--){
     int n,x;
     int sum=0,count=0;
     cin>>n>>x;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
        
     }
     sort(arr,arr+n);
    for(int i=n-1;i>=0; i--){
         if(sum<x){
         sum=sum+ arr[i];
         count++;
         }
         else{
            break;
        }

    }
    if(sum<x){
        cout<<-1<<endl;
    }
    else{
        cout<<count<<endl;
    }

 }
    return 0;
}