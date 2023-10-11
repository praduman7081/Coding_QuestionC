#include<iostream>
using namespace std;

bool powerOf2(int n){
    return (n && !(n & n-1));
}

int main()
{
    cout<<powerOf2(0);
    return 0;
}