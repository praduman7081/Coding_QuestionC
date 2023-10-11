#include<iostream>
  using namespace std;

  class employee
  {
  private:
      int id;
     int count=0;

      public:
       void setdata(void){
           cout<<"Enter the Id"<<endl;
           cin>>id;
           count++;
       }
      void getdata(void){
       cout<<"The Id of this employee is"<<id <<" "<<"and this is employee number"<<count<<endl;
      }
  };
  
 
  
  

int main()
{
    employee harry,rohan,lovish;
    harry.setdata();
    harry.getdata();

    rohan.setdata();
    rohan.getdata();

    lovish.setdata();
    lovish.getdata();
    return 0;
}