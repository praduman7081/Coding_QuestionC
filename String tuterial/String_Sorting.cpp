#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1 = "dfghyertioplkjm";
    string s2 = "awqzxrftgvhbnjuk";
    string s3="463723";
    // Bydefault sortted in increasing order
    sort(s1.begin(), s1.end());
    cout << s1 << endl;
    sort(s2.begin(),s2.end(),greater<int>());
    cout<<s2<<endl; 

    // TO find max value given of some digits....
    
    sort(s3.begin(),s3.end(),greater<int>());
    cout<<s3<<endl;

    return 0;
}