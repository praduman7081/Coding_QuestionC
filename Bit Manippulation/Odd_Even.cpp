#include<iostream>
using namespace std;

void odd_even(int n){

    // (n&1)? cout<<"odd number" : cout<<"even number";
    if(n&1){
        cout<<n<<" is odd number"<<endl;
    }
    else{
        cout<<n<<" is even number"<<endl;
    }
}

int main()
{
    odd_even(7);
    return 0;
}