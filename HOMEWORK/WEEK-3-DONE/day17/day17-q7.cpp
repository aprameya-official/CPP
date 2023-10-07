#include<iostream>
using namespace std;
int main()
{ int n;
cout<<"enter the number";
  cin>>n;
        if(n==0)
        cout<<1;
        int mul=1,rem,ans=0;
        while(n){
            rem=n%2;
            rem=rem^1;
            n=n/2;
            ans=ans+rem*mul;
            mul=mul*2;

        }
        cout<<ans;
    return 0;
}