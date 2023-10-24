#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int fact(int n) {
    int ans = 1;
    while (n) {
        ans = ans * n;
        n--;
    }
    return ans;
}

// Function to calculate n choose r (nCr)
int ncr(int &n, int &r) {
    int ans = fact(n) / (fact(r) * fact(n - r));
    return ans;
}

int main() {
    int n, r;

    // Input n and r from the user
    cout << "Enter the value for n: ";
    cin >> n;
    cout << "Enter the value for r: ";
    cin >> r;

    // Calculate n choose r (nCr)
    int ans = ncr(n, r);

    // Output the result
    cout << "nCr is " << ans << endl;

    return 0;
}
