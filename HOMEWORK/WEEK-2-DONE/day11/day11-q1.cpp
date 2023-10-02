#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    cout<<"enter the number";
    cin>>n;
    for(row=1;row<=n;row++){
        //for space
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }
        //for *
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
       cout<<endl; 
    }
}