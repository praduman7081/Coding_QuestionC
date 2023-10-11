 #include <iostream>
 #include<math.h>
  using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
      int a,b,mx;
      cin>>a>>b;
     mx= max(a,b);
     cout<<mx<<" "<<a+b<<endl;
    }
    return 0;
}