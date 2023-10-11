 #include <iostream>
 
  using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
    int m;
   double  fact=1;
        cin>>m;
        for(int i=m; i>0; i--){
            fact*=i;
        }
        cout<<fact<<endl;
    }
    return 0;
}