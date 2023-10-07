#include<iostream>
using namespace std;
int cube(int &n){
    int ans=n*n*n;
    return ans;
}
int main()
{ int n;
cout<<"enterhte number";
  cin>>n;
  cube(n);
  cout<<"The cube of "<<n<<" is "<<cube(n);
  cout<<endl;
    return 0;
}