#include <iostream>
using namespace std;

void printHelloWorld(int n) {
    for (int i = 0; i < n; i++) {
        cout << "HELLO WORLD" << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of times to print 'HELLO WORLD': ";
    cin >> n;

    if (n > 0) {
        printHelloWorld(n);
    } else {
        cout << "Invalid input. Please enter a positive number." << endl;
    }

    return 0;
}
