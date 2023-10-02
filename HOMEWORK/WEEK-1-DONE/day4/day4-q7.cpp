#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<"printing all odd number between 1 to"<<n<<" ";
    for(int i=1;i<n;i=i+2){
        cout<<i<<" ";

    }
}