#include<iostream>
using namespace std;
int main()
{ int ans=0,rem,x;
cout<<"enter the number";
cin>>x;
 while(x){
    rem=x%10;
    x=x/10;
    ans=ans*10+rem;

 }cout<<ans;
    return 0;
}