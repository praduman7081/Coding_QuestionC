#include<iostream>
  using namespace std;
class employee {
    private:
    int pid;
    string pname;
    float psalary;
    
    public:
    int id;
    string name;
    float salary;
    void print(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
    void setdata(int a,string s,float b){
        pid=a;
        pname=s;
        psalary=b;
    }
    void getdata();

};
void employee::getdata(){
     cout<<pid<<" "<<pname<<" "<<psalary<<endl;
}
int main()
{
    employee e1,e2,e3;
    e3.setdata(85,"Anish",42000);
    e3.getdata();
    e1.id=34;
    e1.name="Monu";
    e1.salary=40000;
    e2.id=45;
    e2.name="Sonu";
    e2.salary=35000;
    e1.print();
    e2.print();
    return 0;
}