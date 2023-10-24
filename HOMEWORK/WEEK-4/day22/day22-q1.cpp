#include<iostream>
using namespace std;

int main() {
    int arr[20];   // Declare an array to store 20 integers.
    int sum = 0;   // Initialize a variable to store the sum of elements.
    
    cout << "Enter the elements in the array:" << endl;
    
    for (int i = 0; i < 20; i++) {
        cin >> arr[i];   // Read an integer from the user and store it in the array.
        sum = sum + arr[i];   // Add the entered value to the sum.
    }

    cout << "Sum of elements in the array: " << sum << endl;
    
    return 0;
}
