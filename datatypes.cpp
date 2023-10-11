#include <iostream>
using namespace std;

int main()
{
    int a;
    a = 7;
    cout << "sige of int  " << sizeof(a) << endl;

    float b;
    cout << "sige of float  " << sizeof(b) << endl;

    char c;
    cout << "sige of char  " << sizeof('c') << endl;
    bool d;
    cout << "sige of bool  " << sizeof(d) << endl;

    short int si;
    long int li;
    cout << "sige of short int " << sizeof(si) << endl;
    cout << "sige of long int  " << sizeof(li) << endl;


    return 0;
}