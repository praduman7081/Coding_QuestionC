#include<iostream>
using namespace std;

int update_bit(int n,int pos,int val){
    int mask = ~(1<<pos);
    n=n & mask;
    return n | (val<<pos) ;
}

int main()
{
     cout<<update_bit(5,1,1)<<endl;
    return 0;
}