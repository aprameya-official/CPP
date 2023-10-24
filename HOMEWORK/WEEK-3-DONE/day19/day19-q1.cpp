#include<iostream>
using namespace std;

// Function to solve the problem
int solve(int A, int B, int C) {
    // Calculate the initial position
    int initial = (C - 1) % B;
    
    // Calculate the final position
    int final = (initial + A) % B;
    
    return final;
}

int main() {
    int A, B, C;
    // Input A, B, and C from the user
    cin >> A >> B >> C;

    // Call the solve function and print the result
    cout << solve(A, B, C);

    return 0;
}
