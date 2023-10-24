
Here's a beginner-friendly comment for your code:

cpp
Copy code
#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter a number
    cout << "Enter the number: ";
    cin >> n;

    int ans = 1;

    // Use a 'while' loop to calculate the factorial of 'n'
    while (n > 0) {
        ans = ans * n; // Multiply 'ans' by 'n'
        n--; // Decrement 'n' for the next iteration
    }

    // Output the factorial of the entered number
    cout << "Factorial: " << ans;
    // do{
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    //     i++;
    // }while(i<=n);
    return 0;
}