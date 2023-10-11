#include<iostream>
  using namespace std;
  

  class student{
      public:
      string name;
      int age;
      bool gender;
      void print();
         
      

    //   void print(){
    //       cout<<name<<" "<<age<<" "<<gender<<endl;
    //   }
  };

  void student:: print(){
 cout<<name<<" "<<age<<" "<<gender<<endl;
  }

int main()
{
    // student a,b;
    // a.name="Aman";
    // a.age=20;
    // a.gender=1;
    // b.name="Urvi";
    // b.age=18;
    // b.gender=0;
    // a.print();
    // b.print();
    int n;
    cout<<"Enter the size of object"<<endl;
    cin>>n;
    student arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].age>>arr[i].gender;
       
    }
    for(int i=0;i<n;i++){
       arr[i].print();
    }
    

    return 0;
}
