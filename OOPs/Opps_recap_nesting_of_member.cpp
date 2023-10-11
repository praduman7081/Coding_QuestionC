#include <iostream>
#include <string>
using namespace std;


class Binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones(void);
   void display(void);
};

void Binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void Binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary formate" << endl;
            exit(0);
        }
    }
}
void Binary::ones(void)
        
{
    chk_bin();

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
  void Binary::display(void)
    {
        cout << "Displaying your binary number" << endl;
        for (int i = 0; i < s.length(); i++)
        {
            cout << s.at(i);
        }
    cout << endl;
    }

    int main()
    {

        Binary b ;
        b.read();
        // b.chk_bin();
        b.display();

        b.ones();
        b.display();

        return 0;
    }