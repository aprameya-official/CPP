#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find if there exists a pair with a given difference 'B' in the sorted array 'A'
int Pair_With_Given_Difference(vector<int> &A, int B) {
    sort(A.begin(), A.end()); // Sort the array 'A' in ascending order.

    int start = 0, end = 1, n = A.size(); // Initialize two pointers, 'start' and 'end'.

    if (B < 0)
        B = B * -1; // If 'B' is negative, make it positive.

    while (end < n) {
        if (A[end] - A[start] == B) {
            return 1; // If the difference between elements at 'end' and 'start' is equal to 'B', return 1.

        } else if (A[end] - A[start] < B) {
            end++; // If the difference is less than 'B', move 'end' to the right.

        } else {
            start++; // If the difference is greater than 'B', move 'start' to the right.
        }

        if (start == end)
            end++; // If 'start' and 'end' are at the same position, move 'end' to the right to avoid infinite loop.
    }

    return 0; // If no such pair is found, return 0.
}

int main() {
    int n;
    cin >> n; // Input the size of the array 'A'.

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i]; // Input the elements of the array 'A'.
    }

    int B;
    cin >> B; // Input the difference 'B' to find a pair.

    int result = Pair_With_Given_Difference(A, B); // Call the function to find the result.

    if (result == 1) {
        cout << "There exists a pair with the given difference." << endl;
    } else {
        cout << "No such pair exists with the given difference." << endl;
    }

    return 0;
}
