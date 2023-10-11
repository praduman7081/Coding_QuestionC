#include<iostream>
  using namespace std;
  class shop{
     public:
     int t1,t2;
     shop(){
         string s1="toffee";
         string s2="chips";
         int price=5;
         cout<<s1<<" "<<s2<<" "<<price<<endl;
     }
     void getdata(){
         cout<<t1<<" "<<t2<<endl;
     }
  };

int main()
{
    shop shop1,shop2;
    shop2.t1=152;
    shop2.t2=485;
    shop2.getdata();
    return 0;
}