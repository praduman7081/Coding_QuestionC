 #include <iostream>
  using namespace std;

int main()
{
    int n;
    int count1=0,count2=0;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            count1++;
        }
        else{
            count2++;
        }
    }
    if(count1>count2){
        cout<<"READY FOR BATTTLE "<<endl;
    }
    else{
        cout<<"NOT READY "<<endl;
    }
    return 0;
}