 #include <iostream>
  using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int num,rem,count=0;
        cin>>num;
        while(num>0){
            rem=num%10;
            if(rem==4){
                count++;
            }
            num =num/10;
           
        }
         cout<<count<<endl;
    }
    return 0;
}