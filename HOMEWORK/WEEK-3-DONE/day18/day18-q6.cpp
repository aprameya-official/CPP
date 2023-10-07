#include<iostream>
using namespace std;
int fact(int n){
   
     int ans=1;
    while(n){
       ans=ans*n;
       n--;
    }
return ans;
}
int ncr(int &n,int &r){
    int ans = fact(n) / (fact(r) * fact(n - r));
    return ans;
}
int main()
{ int n,r;
cout<<"enter the value for n";
cin>>n;
cout<<"enter the value for r";
cin>>r;
int ans=ncr(n,r);
cout<<"ncr is "<<ans;
    return 0;
}