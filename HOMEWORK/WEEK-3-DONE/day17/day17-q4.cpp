#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int x=n;
    if(n<1)
    cout<<x<<" is not power of 2";
    while(n!=1){
        if(n%2==1){
        cout<<x<<" is not power of 2";
        return 0;
        }
        n=n/2;
        

    }cout<<x<<" is power of 2";
    return 0;
    
}