#include<iostream>
using namespace std;
int main(){
       int n;
    cout<<"enter the number";
    cin>>n;
    cout<<"printing all numbers divisible by 4 from 1 to"<<n<<" ";
    for(int i=1;i<=n;i++){
        if(i%4==0){
            cout<<i<<" ";
        }
    }
}