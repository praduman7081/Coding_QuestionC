 #include <iostream>
  using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter three no to findout greatest no";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"greatest no="<<a<<endl;
        }
        else{
            cout<<"greatest no="<<c<<endl;
            
        }
    }
    else{
        if(b>c){
            cout<<"greatest no="<<b<<endl;

        }
        else{
            cout<<"greatest no="<<c<<endl;

        }
    }

    return 0;
}