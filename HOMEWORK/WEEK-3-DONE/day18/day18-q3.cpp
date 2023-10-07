#include<iostream>
using namespace std;
void swapthree(int &a,int &b,int &c){
    int temp=b;int temp2=c;
    b=a;
    c=temp;
    a=temp2;
    cout<<a<<" "<<b<<" "<<c;
}
int main()
{  int a,b,c;
  cout<<"enter the vales for a,b&c";
  cin>>a>>b>>c;
  swapthree(a,b,c);
  return 0;
}