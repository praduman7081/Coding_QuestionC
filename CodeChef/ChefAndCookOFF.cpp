#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    while(n--){
    int ar[5], count =0;
    for(int i=0; i<5; i++){
        cin>>ar[i];
        if(ar[i] != 0){
            count++;
        }

    }
    if (count == 0)
    cout<<"Beginner\n";
   else if (count == 1)
    cout<<"Junior Developer \n";
   else if (count == 2)
    cout<<"Middle Developer \n";
   else if (count == 3)
    cout<<"Senior Developer \n";
   else if (count == 4)
    cout<<"Hacker \n";
    else
    cout<<"Jeff Dean \n";

    }
    return 0;
}