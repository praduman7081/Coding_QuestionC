#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,i=1,flag=1;
	    cin>>x>>y;
	    while((x+y+i)>(x+y)){
	        for(int j=2;j<(x+y+i);j++){
	            if((x+y+i)%j==0){
	                flag=0;
	                break;
	            }
	        }
	        if(flag==1){
	            cout<<i<<endl;
	            break;
	        }
	        i++;
	    }
	}
	return 0;
}
