#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << "Not prime" << endl;
    } else {
        int i = 1;  

        while (i <n) {
            if (n % i == 0) {
                cout << n << " is a prime number" << endl;
                return 0;  // Exit the program if a divisor is found
            }
            i++;
        }

        cout << n << " is not a prime number" << endl;
    }

    return 0;
}
