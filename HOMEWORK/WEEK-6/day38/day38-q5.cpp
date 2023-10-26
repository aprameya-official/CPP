#include <iostream>
#include <vector>
using namespace std;

// Function to remove duplicates from a sorted vector and return the count of distinct elements.
int removeDuplicates(vector<int> &A) {
    int n = A.size();
    
    // Check if there are 0 or 1 elements in the array.
    if (n <= 1) {
        return n; // No duplicates in an array with 0 or 1 element.
    }

    int count = 1; // At least one distinct element.

    for (int i = 1; i < n; i++) {
        // Compare the current element with the previous one to check for duplicates.
        if (A[i] != A[i - 1]) {
            // If the current element is distinct, copy it to the next available position.
            A[count] = A[i];
            count++; // Increment the count of distinct elements.
        }
    }

    return count; // Return the count of distinct elements after removing duplicates.
}

int main() {
    vector<int> A = {1, 1, 2, 2, 2, 3, 4, 4, 5};

    int distinctCount = removeDuplicates(A);

    cout << "Distinct elements: ";
    for (int i = 0; i < distinctCount; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
