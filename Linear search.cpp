#include<iostream>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int item;
	cout<<"Enter the item to search"<<endl;
	cin>>item;
	for(i=0;i<n;i++){
		if(arr[i]==item){
			break;
		}
	}
	if(i<n){
		cout<<"item found at index "<<i;
	}
	else{
		i=-1;
		cout<<i;
	}
	return 0;
}
