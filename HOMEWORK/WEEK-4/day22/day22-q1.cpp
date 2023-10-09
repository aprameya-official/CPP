#include<iostream>
using namespace std;
int main()
{  int arr[20];
int sum=0;
cout<<"enter the elements in array";
 for(int i=0;i<=20;i++){
 cin>>arr[i];
 sum=sum+arr[i];
 }

cout<<sum<<endl;
    return 0;
}