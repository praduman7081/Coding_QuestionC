#include<iostream>
  using namespace std;
  class first
  {
  private:
      int a=5,b=6;
  public:
      int c,d;
      void data(){
          cout<<a<<" "<<b<<" "<<c<<" "<<d;
      }
      
  };

int main()
{
    first num;
    num.c=3;
    num.d=2;
      num.data();
    return 0;
}