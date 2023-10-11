#include<iostream>
  using namespace std;

int main()
{
    int t,n ;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n][n],count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==1){
                    count++;
                }
            }
            
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<arr[i][j];
        //     }
        //     cout<<endl;
        // }
        cout<<count<<endl;

    }
    return 0;
}