#include<iostream>
using namespace std;

int get_bit(int n,int pos){
   
    return(( n & (1<<pos))!=0);

}

int main()
{
    cout<<get_bit(8,3)<<endl;
    return 0;
}