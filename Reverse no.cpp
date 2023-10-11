#include<iostream>
using namespace std;
int main(){
	int n , rev= 0;
	cout<<"Enter the Number";
	cin>>n;
	for(int i=0;n>0;i++){
		rev=rev*10+(n%10);
		n=n/10;
	}
	cout<<rev;
	return 0;
}
