#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
  using namespace std;

int main()
{
    int t,i,n;
    cin>>t;
    while(t--){
        
        cin>>n;
        int ar[n];
        for(i=0;i<n;i++){
            cin>>ar[i];
        }
        if(n==1){
            cout<<"0"<<endl;
        }
    if(n==2){
        if(ar[i]==ar[i+1]){
            cout<<"0"<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
        
    }
    int maxcount =0,x=1,y=0;
    sort(ar,ar+n);
    for(i=0;i<n-1;i++){
        if(ar[i]==ar[i+1]){
            x++;
        }
        if(ar[i]!=ar[i+1]){
            x=1;
            y++;
        }
        maxcount=max(maxcount,x);
    }
    if(n>2){
        if(maxcount==1){
            cout<<"-1"<<endl;
        }
        if(maxcount==2){
            cout<<n-1<<endl;
        }
        if(maxcount>2 && y!=0){
            cout<<n-maxcount+1<<endl;
        }
        if(y==0){
            cout<<"0"<<endl;
        }
    }
    }
    return 0;
}