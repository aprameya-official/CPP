#include<iostream>
using namespace std;
int main()
{  int arr[1000]={2,4,6,8,1,0,9};
  for(int i=7-2;i>=0;i--){
    bool swapped=0;
    for(int j=i;j>=0;j--){
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