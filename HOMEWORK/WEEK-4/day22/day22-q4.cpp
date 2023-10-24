#include <iostream>
using namespace std;

int main() {
    char alphabet[26]; // Declare an array of characters to store the alphabet

    // Fill the array with lowercase letters from 'a' to 'z'
    for (int i = 0; i < 26; i++) {
        alphabet[i] = 'a' + i; // Assign characters to the array elements
    }

    // Print the elements of the array separated by spaces
    for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }

    cout << endl; // Print a newline to format the output

    return 0;
}
