#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long int N,K,X;
        cin>>N>>K>>X;
        int j=0;

       
        else if(N==K && N==X){
            for(int i=0;i<N; i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else if(N!=K && N==X){
            cout<<-1<<endl;
        }
        
        else if(N != K && K==X){
            for(int i=0; i<N; i++){
                cout<<j<<" ";
                 j++;
                if(j==K){
                    j=0;
                }
            }
            cout<<endl;
        }
        else{
            j=X-1;
            for(int i= 0; i<N; i++){
                cout<<j<<" ";
                j--;
                if(j==-1){
                    j=X-1;
                }
            }
            cout<<endl;
        }

    }
    return 0;
}