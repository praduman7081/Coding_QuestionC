 #include <iostream>
  using namespace std;

int main()
{
    // T.C=O(n)
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int mx =-99999999;
    for(int i=0; i<n; i++){
        mx = max(a[i],mx);
        // a[i]=mx;
        cout<<mx<<endl;
    }
    return 0;
}