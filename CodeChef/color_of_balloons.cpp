#include <iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int c1=0,c2=0,res;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                c1++;
            }
            else{
                c2++;
            }
        }
        res=min(c1,c2);
        if(res!=0){
            cout<<res<<endl;
        }
        else{
            cout<<0<<endl;
        }
        
    }
	return 0;
}
