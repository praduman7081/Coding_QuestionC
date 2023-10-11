#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int temp=k;
        int n=0;
        while(k>=1){
            k=k/2;
            n++;
        }
        k=temp;
        int sum=0,count=0;
        int arr[n],s[n];
        for(int i=0;i<n;i++){
            arr[i]=k/2;
            k=k/2;
            sum=sum+arr[i];
            s[i]=sum;
            if((arr[i]+s[i])==temp){
               count++;
            }
        }
        if(count!=0){
            cout<<count<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}