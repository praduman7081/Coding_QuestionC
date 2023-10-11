 #include <iostream>
  using namespace std;

int main()
{
    string s1="Child";
    string s2="hood";
    cout<<s1<<" "<<s2<<endl;
    // s1.append(s2);
    // cout<<s1<<endl;
    s1=s1+s2;
    cout<<s1<<endl;
    // cout<<s1+s2<<endl;
    return 0;
}