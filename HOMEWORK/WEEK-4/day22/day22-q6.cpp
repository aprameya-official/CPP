#include <iostream>
#include <climits> // Include this header for INT_MIN
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements (n > 3): ";
    cin >> n;

    if (n <= 3) {
        cout << "Invalid input. n should be greater than 3." << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter " << n << " unique elements:";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int firstLargest = INT_MIN; // Initialize the first largest to the smallest possible integer
    int secondLargest = INT_MIN; // Initialize the second largest to the smallest possible integer
    int thirdLargest = INT_MIN; // Initialize the third largest to the smallest possible integer

    for (int i = 0; i < n; i++) {
        if (arr[i] > firstLargest) {
            thirdLargest = secondLargest; // Update the third largest
            secondLargest = firstLargest; // Update the second largest
            firstLargest = arr[i]; // Update the first largest
        } else if (arr[i] > thirdLargest && arr[i] != firstLargest && arr[i] != secondLargest) {
            thirdLargest = arr[i]; // Update the third largest
        }
    }

    cout << "The third largest element is: " << thirdLargest << endl;

    return 0;
}
