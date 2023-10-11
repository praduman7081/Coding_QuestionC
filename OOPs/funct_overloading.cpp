#include<iostream>
  using namespace std;
//   function overloading.........
  class overload{
       public:
       
       void func(){
           cout<<"I am function with no argument"<<endl;
       }
       void func(int a){
           cout<<"I am function with inter data type"<<endl;
       }
       void func(double a){
           cout<<"I am function with double data type"<<endl;
       }

  };

int main()
{
    overload obj;
    obj.func();
    obj.func(2);
    obj.func(2.5);
    return 0;
}