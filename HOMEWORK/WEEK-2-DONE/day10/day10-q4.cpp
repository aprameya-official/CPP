#include<iostream>
using namespace std;
int main(){

    int row,col,n;
    
    cout<<"enter your number:";
    cin>>n;
    for(row=1;row<=n;row++){
        //for space
        for(col=1;col<=n-row;col++)
            cout<<"  ";
        //for characters
        char name='E';
        for(col=1;col<=row;col++)
            cout<<name<<" ";
            name--;

            cout<<endl;
        
    }
}