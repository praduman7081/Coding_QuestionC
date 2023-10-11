 #include <iostream>
  using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
for(int i=0; i<n; i++){
    cin>>a[i];

}
int ans;
for(int i=0; i<n; i++){
    ans=0;
    for(int j=0+i; j<n;j++){
      ans+=a[j];
      cout<<ans<<endl;
    }
}
    return 0;
}