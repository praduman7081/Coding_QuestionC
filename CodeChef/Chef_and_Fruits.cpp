#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int l,m,n;
	    cin>>l>>m>>n;
	    if(l>m){
	        if(l-m>n){
	            cout<<l-(m+n)<<endl;
	        }
	        else {
	            cout<<0<<endl;
	        }
	        } 
	        
	      else if(l<m){
	        if(m-l>n){
	            cout<<m-(l+n)<<endl;
	        }
	       else{
	            cout<<0<<endl;
	        }
	       }
	     else{
	            cout<<0<<endl;
	        }
	    
	}
	return 0;
}
