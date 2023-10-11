#include <iostream>
using namespace std;

int main()
{
    int n, m, temp;
    cout << "Enter rows and coloums";
    cin >> n >> m;
    int arr[n][m];
    cout<<"Please enter the elements"<<endl;
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
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;

        }
    }
    cout << "Transpose matrix" << endl;
    for (int i= 0; i< m; i++)
    {
        for (int j = 0; j < n;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}