#include<iostream>
using namespace std;

int main() {
    int arr[18];
    int sum = 0;
    cout << "Enter the elements in the array: ";

    // Change the loop condition to iterate only 18 times (0 to 17)
    for (int i = 0; i < 18; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    // Calculate the average after the loop
    int avg = sum / 18;

    // Print the average
    cout << "The average of the elements in the array is: " << avg << endl;

    return 0;
}
