

// 1. **std::abs():** Calculates the absolute value of a number.

// ```cpp
// #include <iostream>
// #include <cmath>

// int main() {
//     int num = -10;
//     int absoluteValue = std::abs(num);
    
//     std::cout << "Absolute value of " << num << " is " << absoluteValue << std::endl;
    
//     return 0;
// }
// ```

// 2. **std::toupper() and std::tolower():** Converts characters to uppercase or lowercase.

// ```cpp
// #include <iostream>
// #include <cctype>

// int main() {
//     char lowercaseChar = 'a';
//     char uppercaseChar = std::toupper(lowercaseChar);
    
//     std::cout << "Uppercase: " << uppercaseChar << std::endl;

//     char uppercaseChar2 = 'A';
//     char lowercaseChar2 = std::tolower(uppercaseChar2);

//     std::cout << "Lowercase: " << lowercaseChar2 << std::endl;
    
//     return 0;
// }
// ```

// 3. **std::sqrt():** Calculates the square root of a number.

// ```cpp
// #include <iostream>
// #include <cmath>

// int main() {
//     double number = 25.0;
//     double squareRoot = std::sqrt(number);
    
//     std::cout << "Square root of " << number << " is " << squareRoot << std::endl;
    
//     return 0;
// }
// ```

// 4. **std::stoi():** Converts a string to an integer.

// ```cpp
// #include <iostream>
// #include <string>

// int main() {
//     std::string numStr = "12345";
//     int num = std::stoi(numStr);
    
//     std::cout << "Converted integer: " << num << std::endl;
    
//     return 0;
// }
// ```

// 5. **std::string::find():** Searches for a substring in a string.

// ```cpp
// #include <iostream>
// #include <string>

// int main() {
//     std::string text = "Hello, World!";
//     std::string searchTerm = "World";
    
//     size_t found = text.find(searchTerm);
    
//     if (found != std::string::npos) {
//         std::cout << "Found at position " << found << std::endl;
//     } else {
//         std::cout << "Not found" << std::endl;
//     }
    
//     return 0;
// }
// ```

