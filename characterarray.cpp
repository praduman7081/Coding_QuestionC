 #include <iostream>
  using namespace std;

int main()
{
    char arr[50]="Rahul is a boy";
    int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i];
        i++;
    }
    cout<<endl;
    cout<<arr[4]<<endl;
    cout<<arr[7]<<endl;
    return 0;
}