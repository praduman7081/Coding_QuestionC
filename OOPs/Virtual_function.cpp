#include<iostream>
  using namespace std;
//   For Runtime Polymorfisme
// add " virtual" in function memeber in Base class----
  class base{
      public:
    virtual  void print(){
          cout<<"This is the base class print function "<<endl;
      }
     virtual void display(){
          cout<<"This is the base class display function "<<endl;
      }
  };
  class derived:public base{
      public:
     void print(){
          cout<<"This is the derived class print function"<<endl;

      }
     void display(){
          cout<<"This is the derived class display function"<<endl;
      }
  };

int main()
{
    base *baseptr;
    derived obj;
    baseptr=&obj;
    baseptr-> print();
    baseptr-> display();
    
    return 0;
}