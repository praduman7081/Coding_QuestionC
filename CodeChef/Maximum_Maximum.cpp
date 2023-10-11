#include <iostream>
#include<vector>
// #include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long int n,a;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        
        sort(v.begin(), v.end());
        cout<<v.at(0)*(n-1)<<endl;
       
    }
	
	return 0;
}
