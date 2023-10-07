#include<iostream>
using namespace std;
int main()
{ int i=1,result=1,x;
cout<<"enter the number";
cin>>x;
        if(x==0||x==1){
            cout<<x;
        }while(result<=x){
            i++;
            
            result=i*i;

        }cout<<i-1;
    
}