#include<iostream>
using namespace std;
int main()
{   char arr[1000]={'d','a','c','f','u','b'};
  for(int i=7-2;i>=0;i--){
    bool swapped=0;
    for(int j=0;j<=i;j++){
        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
         swapped=1;
    }
    if(swapped==0)
    break; 
  }
    for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
}