#include<iostream>
#include<iomanip>
using namespace std;
int main()
 {
 	int a;
 	float b;
 	cin>>a>>b;
    if(a<=(b-0.50) && a%5==0)
 	cout<<fixed<<setprecision(2)<<(b-(a+0.50));
	else
	cout<<fixed<<setprecision(2)<<b;
	return 0;
 }

