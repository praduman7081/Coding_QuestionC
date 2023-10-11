#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    // Write a file through using function member of class.
    string st="Be Happy.";
    ofstream out;  // Here ofstream is a object of a fstream class.
   out.open("file3.txt");
   out<<st<<"\n";  // Write a file through a string.
   out<<"convert an int to  a decimal";
   out.close();

    ifstream in;
    string s;
    in.open("file4.txt");
    // in>>s;
    // getline(in,s);
    while(in.eof()==0){ // 'eof' means end of file
        getline(in,s);
        cout<<s<<endl;
    
    }
    in.close();
    
    return 0;
}