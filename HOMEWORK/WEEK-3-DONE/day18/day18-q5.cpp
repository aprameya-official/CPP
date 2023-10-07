#include<iostream>
using namespace std;
void print(int&n){
for(int i=0;i<n;i++){
 cout<<"HELLO WORLD"<<endl;
 
}
}
int main()
{  int n;
    cout << "Enter the number of times to print 'HELLO WORLD': ";
    cin >> n;
    
    if (n > 0) {
        print(n);
    } else {
        cout << "Invalid input. Please enter a positive number." << endl;
    }

    return 0;
}