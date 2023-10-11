 #include <iostream>
 #include<stdlib.h>
 #include<climits>
  using namespace std;

int main()
{
    int n,i,min,pos,j,temp;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
       min = INT_MAX;
        for(j=i+1;j<n;j++){
         if(arr[j]<min){
             min=arr[j];
            pos=j;
         }
        }

        if(arr[i]>arr[pos]){
            temp=arr[i];
            arr[i]=arr[pos];
            arr[pos]=temp;

        }
    }
    cout<<"Sorting array"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    
    return 0;
}