 #include <iostream>
  using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int num,rem,sum=0;
        cin>>num;
        while(num>0){
            rem=num%10;
            sum+=rem;
            num=num/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}