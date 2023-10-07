#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;

    int ans=1;
    while(n){
       ans=ans*n;
       n--;
    }cout<<ans<<" ";
    // do{
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    //     i++;
    // }while(i<=n);
    return 0;
}