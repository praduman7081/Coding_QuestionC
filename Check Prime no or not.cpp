#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int i,n,x=0;
	cout<<"Enter the number to check Prime or not"<<endl;
	cin>>n;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			x=1;
			break;
		}
	}
	if(x==0){
		cout<<" Prime number"<<endl;
	}
	else{
	cout<<" non-prime number"<<endl;
}
	return 0;
}
