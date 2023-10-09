#include<iostream>
using namespace std;
int main()
{ int size,x;
cout<<"enter the size of array";
cin>>size;
cout<<"enter the value you want to found";
cin>>x;
 
 int arr[size];
 cout<<"enter the elements: ";
 

 for(int i=0;i<size;i++){
  cin>>arr[i];
  }
  for(int i=0;i<size;i++){
  if(arr[i]==x)
  cout<<"the element is present at index number"<<i<<endl;
  
  }return -1;
    return 0;
}