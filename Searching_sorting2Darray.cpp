 #include <iostream>
  using namespace std;

int main()
{
    int n,m,flag=0;
    cout<<"Please enter rows and colums"<<endl;
    cin>>n>>m;
    cout<<"Please enter the elements"<<endl;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
int key,r=0,c=m-1;
cout<<"Please enter key to search"<<endl;
    cin>>key;
        while(r<n && c>=0){
        if(a[r][c]==key){
            cout<<" Key found at index "<<r<<c<<endl;
            flag=1;
            break;
        }

       else if(a[r][c]<key){
        r++;
        }
        else{
            c--;
        }
    }

    if(flag==0){
        cout<<"Key dose not found";
    }
    return 0;
}