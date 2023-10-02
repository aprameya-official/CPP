#include<iostream>
using namespace std;
int main(){
   int n;
   int sum=0;
   cout<<"enter the number for sum of cubes";
   cin>>n;
   for(int i=1;i<=n;i++){
    int cube=i*i*i;
    sum=sum+cube;
    
   }cout<<sum;
}