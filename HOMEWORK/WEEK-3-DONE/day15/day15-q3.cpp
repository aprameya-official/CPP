#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number n: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << " not divisible by 3 and 5 are:" << endl;

    int i = 1; 

    while (i <= n) {
        if (i % 3 == 0 || i % 5 == 0) {
            i++; // Increment the counter and skip the number
            continue;
        }

        cout << i << " ";

        i++; // Increment the counter
    }

    cout << endl;

    return 0;
}
