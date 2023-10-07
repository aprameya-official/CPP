#include<iostream>
using namespace std;

int main() {
    int ans = 0, rem, x, original;
    cout << "Enter the number: ";
    cin >> x;
    
    original = x; // Store the original value of x

    while (x) {
        rem = x % 10;
        x = x / 10;
        ans = ans * 10 + rem;
    }

    if (ans == original) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}
