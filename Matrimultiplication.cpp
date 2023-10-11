 #include <iostream>
  using namespace std;

int main()
{
    int n,m,l;
    cin>>n>>m>>l;
    int a[n][l] ,b[l][m];
    cout<<"Enter the elements of both matrix"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<l; j++){
            cin>>a[i][j];
        }
    }
     for(int i=0; i<l; i++){
        for(int j=0; j<m; j++){
            cin>>b[i][j];
        }
    }
    int ans[n][m];
     for(int i=0; i<n; i++){
         for(int j=0; j<m; j++){
              ans[i][j]=0;
         }
     }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            for(int k=0; k<l; k++){

                ans[i][j]+=a[i][k]*b[k][j] ;
            }
            
        }
        
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}