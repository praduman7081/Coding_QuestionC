 #include <iostream>
 #include<algorithm>
 #include<string>

  using namespace std;

int main()
{
   
    
    string s1="abcdefghijklmnopqrstuvwxyz";
    string s2 ="DIGNITY";
    string s3="HIUEDJFDEHFRUJT";
    cout<<s1<<endl;
    for (int i=0; i<s1.size();i++){
        s1[i]=s1[i]-32;
    }
    cout<<s1<<endl;
    cout<<s2<<endl;
    for (int i=0; i<s2.size();i++){
        s2[i]=s2[i]+32;
    }
    cout<<s2<<endl;
    // transform(s3.begin(),s3.end(),s3.begin()::tolowercases);
    cout<<s3<<endl;
    return 0;
}