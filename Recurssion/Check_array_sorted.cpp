 #include <iostream>
  using namespace std;

bool sorted(int a[],int n){
if(n==1){
    return true;
}
bool restarray =sorted(a+1,n-1);
return (a[1]>a[0] && restarray);

 

  

}
int main()
{
    int n,a[]={1,2,3,4,5,6,7,8};
    cout<<sorted(a,8)<<endl;
    return 0;
}