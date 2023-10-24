#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter the month number
    cout << "Enter the month number: ";
    cin >> n;

    // Check the value of 'n' and display the corresponding month
    if (n == 1)
        cout << "January";
    else if (n == 2)
        cout << "February";
    else if (n == 3)
        cout << "March";
    else if (n == 4)
        cout << "April";
    else if (n == 5)
        cout << "May";
    else if (n == 6)
        cout << "June";
    else if (n == 7)
        cout << "July";
    else if (n == 8)
        cout << "August";
    else if (n == 9)
        cout << "September";
    else if (n == 10)
        cout << "October";
    else if (n == 11)
        cout << "November";
    else if (n == 12)
        cout << "December";
    else
        cout << "Invalid number";

    return 0;
}
