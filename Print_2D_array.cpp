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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}