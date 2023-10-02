#include<iostream>
using namespace std;
int main()
{ 
    int age;
    cout<<"enter the age";
    cin>>age;
    if(age>=13 && age<=19)
    cout<<"teenager";
    else
    cout<<"not a teenager";
    return 0;
}