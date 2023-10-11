#include<iostream>
using namespace std;

int la(int x,int arr[],int w){
	for(int i=0;i<x;i++){
		if(arr[i]==w){
			return i;
		}
	}
	return -1;
}
int main(){
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the element of array "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int item;
	cout<<"Enter the element to search "<<endl;
	cin>>item;
    cout<<la(n,arr,item);
	
	return 0;
}
