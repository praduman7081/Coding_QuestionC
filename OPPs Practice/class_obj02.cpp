#include<iostream>
  using namespace std;
  class room
  {
   int a,c;
  public:
  int l ,b,h;
//   inside member function definition
  void calcul_area(){
      cout<<l*b<<endl;
  }
  void calcul_volume();
      void setperi(int x,int y){
          a=x;
          c=y;
      }
      void getperi();
    //   {
    //       cout<<2*(a+c)<<endl;
    //   }
  
    
  };

//   outside member funtion definition
 void room::calcul_volume(){
cout<<l*b*h<<endl;
  }
  void room::getperi(){
       cout<<2*(a+c)<<endl;
  }
  
  
int main()
{
    room room1,room2;
    room1.l=5;
    room1.b=6;
    room1.h=4;
    room2.setperi(7,8);
    room2.getperi();
    room1.calcul_volume();
    room1.calcul_area();
    return 0;
}