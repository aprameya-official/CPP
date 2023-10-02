#include<iostream>
using namespace std;
int main(){
    int row,col;
    
    for(row=1;row<=6;row++){
        int count=10;
        for(col=5;col>=5-row+1;col--){
            
            
            cout<<count<<" ";
            count++;
            
        }cout<<endl;
    }
}