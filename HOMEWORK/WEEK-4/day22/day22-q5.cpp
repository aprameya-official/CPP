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

    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    cout << "The second largest element is: " << secondLargest << endl;

    return 0;
}
