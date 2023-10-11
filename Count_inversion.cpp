 #include <iostream>
  using namespace std;
// O(n^2)
int inversion(int a[],int n){
      int invers=0;
      for(int i=0;i<n; i++ ){
          for(int j=i+1; j<n; j++){
             if(a[i]>a[j]){
                 invers++;
             }
          }
      }
      return invers;
      
}
int main()
{
    int n;
    cout<<"Please enter the size"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<inversion(a,n);
    return 0;
}