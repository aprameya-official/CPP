#include <iostream>
using namespace std;

int main() {
    char alphabet[26]; // Declare an array of char with size 26

    // Fill the array with 'a' to 'z'
    for (int i = 0; i < 26; i++) {
        alphabet[i] = 'a' + i;
    }

    // Print the elements of the array
    for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }

    cout <<endl;

    return 0;
}
