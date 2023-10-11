#include<iostream>
using namespace std;
/*int sum (int);
int sum(int x){
	 int sum=0,i=1;
	while(i<=x){
		sum= sum+i;
		i++;
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	cout<<"Sum of first "<<n<<" Natural number"<<endl;
	sum(n);
	cout<<sum(n);
	return 0;
}*/
int main (){
	int n,sum;
	cin>>n;
	sum=(n*(n+1))/2;
	cout<<sum;
	return 0;
}

