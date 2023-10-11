#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, x,ans;
        cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Index of zeroes that are flipped: ";
    vector<int> result_index = maximized_one(arr, n, m);
    for (auto i : result_index) {
        ans =i;
    }
    cout<<ans<<endl;

    }
    return 0;
}