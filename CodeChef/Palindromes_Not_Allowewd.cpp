#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s ="";
        char ch ='a';
        for(int i=0; i<n; i++){
            s = s + ch;
            ch++;
            if(ch == 'd'){
                ch = 'a';
            }

        }
        cout<<s;
    }
    return 0;
}