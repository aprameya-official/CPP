#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    // Evaluate expressions and store the results in variables 'a', 'b', 'c', and 'd'
    a = (2 * 3 - 48 == 5 / 4 * 6);
    b = (6 << 2 - 4 * 8 / 2);
    c = (5 > 4 < 3 / 2 - 8 % 4 + 5);
    d = (14 - 8 + 92 >> 2 + 70);

    // Output the results of the expressions
    cout << "My answers are: " << a << " " << b << " " << c << " " << d;

    return 0;
}
