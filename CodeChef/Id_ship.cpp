#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char n;
        cin >> n;

        switch (n)
        {
        case 'B':
        case 'b':
            cout << "BattleShip"<<endl;
            break;
        case 'C':
        case 'c':
            cout << "Cruiser"<<endl;
            break;
        case 'D':
        case 'd':
            cout << "Destroyer"<<endl;
            break;
        case 'F':
        case 'f':
            cout << "Frigate"<<endl;
            break;

        default:
            break;
        }
    }
    return 0;
}