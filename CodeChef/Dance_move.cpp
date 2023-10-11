 #include <iostream>
 #include<math.h>
  using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int a,b,len,x ,moves=0;
        cin>>a>>b;
        x=(a-b);
        len=abs(x);
        if(a<b){
		
        if(len%2==0){
          moves=len/2;
        }
        else{
            
            moves=len/2+2;
        }
        cout<<moves<<endl;
    }
    else{
    	moves=len;
    	cout<<moves<<endl;
	}
	}
    return 0;
}
