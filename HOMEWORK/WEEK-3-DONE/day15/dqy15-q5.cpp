#include <iostream>
using namespace std;

int main() {
    char uppercase = 'A';
    char lowercase = 'a';

    cout << "Uppercase letters: ";
    while (uppercase <= 'Z') {
        cout << uppercase << " ";
        uppercase++;
    }

    cout << endl;

    cout << "Lowercase letters: ";
    while (lowercase <= 'z') {
        cout << lowercase << " ";
        lowercase++;
    }

    cout << endl;

    return 0;
}
