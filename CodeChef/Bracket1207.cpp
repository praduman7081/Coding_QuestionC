#include <iostream>
#include<string>
#define ll long long
using namespace std;

int countValidParathesis(string s){
    int currBalance = 0;
    int maxBalance = 0;
    
    for(int i=0; i<s.size(); i++){
        if(s[i]=='('){
            currBalance++;
        }
        else if(s[i] == ')'){
            currBalance--;
        }
        
        maxBalance = max(maxBalance, currBalance);
    }
    
    return maxBalance;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
      string str,ans = "";
	  cin>>str;
	  int maxNum = countValidParathesis(str);
	  cout<< '(' * maxNum + ')' * maxNum;
	  cout<<endl;
	  
	}
	
	
	return 0;
}
