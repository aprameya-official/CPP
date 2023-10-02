#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age:";
    cin>>age;
    if(age<12||age>65){
        cout<<"yes";
    }
    else{
    cout<<"no";
    }
}