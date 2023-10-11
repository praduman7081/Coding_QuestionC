#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int n,i=1,count=0;
	    cin>>n;
	    while(n>0){
	        for(int j=1;j<=i;j++){
	            n--;
	        }
	        count++;
	        i++;
	    }
	    if(n==0){
	    cout<<count<<endl;
	    }
	    else{
	         cout<<count-1<<endl;
	    }
	}
	return 0;
}
