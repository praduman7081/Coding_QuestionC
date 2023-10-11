#include<iostream>
#include<string>
#include<fstream>
using namespace std;


// class template
/*
1. fstreambase class
2. ifstream derrived class
3. ofstream derrived class
*/

int main()
{
    //Write the file through using Constructor 
    ofstream out("file1.txt");
    out<<"My name is Praduman singh\n";
    out<<"From Kushinagar Uttar Pradesh\n";

    out.close();  // It is used for disconnect from file to program
    out<<"and";
     string s;
    ifstream in("file2.txt");
    // in>>s;      // it is not read any space or new line
     getline(in,s);  // It is not read any new line
    cout<<s;

    in.close();
    return 0;
}