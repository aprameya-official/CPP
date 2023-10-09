#include<iostream>
using namespace std;
 int setBits(int &N) {
        int count=0;
        while(N>0){
            
            int b=N%2;
            if(b==1)
            count++;
            N=N/2;
            
        }return count;
    }
int main()

{
int N;
cout<<"enter the number";
 cin>>N;
 cout<<"your result is ";
 cout<<setBits(N);
    return 0;
}