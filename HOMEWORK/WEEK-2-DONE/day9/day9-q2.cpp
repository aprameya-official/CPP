#include<iostream>
using namespace std;
int main(){
    int row,col;
    
    for(row=1;row<=5;row++){
         char ch='A';
        for(col=5;col>=5-row+1;col--){
            
            
            cout<<ch<<" ";
            ch++;
            
            
        }cout<<endl;
    }
}