#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array "<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	
	
	for(int i=0;i<n-1;i++){
		int mx=INT_MAX;
		int pos;
		for(int j=i+1;j<n;j++){
			if(arr[j] < mx)
			{
				mx=arr[j];
				pos=j;
			}
		}
	if(mx < arr[i])
	{
//		int temp=arr[i];
//		arr[i]=mx;
//		arr[pos]=temp;
swap(arr[i],arr[pos]);
		
	}
	}
	
	cout<<"Sorting array---- "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
