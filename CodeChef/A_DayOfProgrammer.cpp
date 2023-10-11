#include<iostream>
#include<string>

using namespace std;


string dayOfProgrammer(int year)
{
    string s1 = "12.09.";
    string s2 = "13.09.";
    string s3 = "26.09.";
    if (year >= 1700 && year < 1918)
    {
        if (year % 4 == 0)
        {
            return (s1 + to_string(year));
        }
        else
        {
            return (s2 + to_string(year));
        }
    }

    else if (year > 1918 && year <= 2700)
    {

        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            return (s1 + to_string(year));
        }
        else
        {
            return (s2 + to_string(year));
        }
    }
    else
    {
        return (s3 + to_string(year));
    }
}

int main()
{

    int year;
    cin >> year;

    string result = dayOfProgrammer(year);

    cout << result << "\n";

    return 0;
}
