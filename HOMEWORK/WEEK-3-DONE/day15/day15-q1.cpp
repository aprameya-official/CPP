#include<iostream>
using namespace std;
int main()
{   
    int i=1;
    int n;
    cout << "Enter a value for n: ";
    cin >> n;
    cout<<"output in while";
    while(i<=n){
        if(i%2==0)
    
        cout<<i<<" ";
        else
         ; // Do nothing for odd numbers
        i++;
    }
    // do {
    //     cout<<"output in do while" ;
    //     if (i % 2 == 0)
         
    //         cout << i<<" ";
    //     else
    //         ; // Do nothing for odd numbers

    //     i++; // Increment 'i' in every iteration
    // } while (i <= n);
    return 0;
}