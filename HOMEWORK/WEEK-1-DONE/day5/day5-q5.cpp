#include<iostream>
using namespace std;
int main(){
   int n;
   int sum=0;
   cin>>n;
   cout<<"enter the number for sum of squares";
   for(int i=1;i<=n;i++){
    int square=i*i;
    sum=sum+square;
    
   }cout<<sum;
}