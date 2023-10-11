#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the rows and colums of matrix" << endl;
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter the elements of matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key, flag=0;
    cout<<"Enter the element to search"<<endl;
cin>>key;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]==key){
                cout<<"element found at index "<<i<<j<<endl;
                flag=1;
                break;
            }
        }
        
    }
    if(flag==0)
    cout<<"Element not found";
    
    return 0;
}