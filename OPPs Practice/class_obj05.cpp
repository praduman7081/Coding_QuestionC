#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    string name;
    float salary;

public:
    void setdata(int x, string y, float z)
    {
        id = x;
        name = y;
        salary = z;
    }
    void getdata();
};
void employee::getdata()
{
    cout << id << " " << name << " " << salary << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        employee e1;
        int a;
        string s;
        float b;
        cout << "Enter the id ,name and Salary of employee" << endl;
        cin >> a >> s >> b;
        e1.setdata(a, s, b);
        e1.getdata();
    }

    return 0;
}