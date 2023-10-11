// Subarray: Contineous part of array.
// Number of subbarray with given elements n  =nC2+n=n*(n+1)/2
// Subsequence: Not contineous part of array but remaining  ordered maintain.
// Number of Subsequence of given elements n  = pow(2,n)
// Every subarray is a subsequence but not every subsequence is a subarray.


 #include <iostream>
 #include<math.h>
  using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"Number of Subarray ="<<n*(n+1)/2<<endl;
    cout<<"Number of Subsequence ="<<pow(2,n)<<endl;
    return 0;
}