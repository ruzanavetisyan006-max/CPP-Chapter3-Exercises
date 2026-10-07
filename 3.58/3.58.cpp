#include <iostream>

template <typename T>
T myMin(T a, T b) {
    return (a < b) ? a : b;
}

int main() {

    int int1 = 15, int2 = 42;
    std::cout << "Integer comparison:\n";
    std::cout << "myMin(" << int1 << ", " << int2 << ") = " 
              << myMin(int1, int2) << "\n\n";

    char char1 = 'G', char2 = 'A';
    std::cout << "Character comparison:\n";
    std::cout << "myMin('" << char1 << "', '" << char2 << "') = '" 
              << myMin(char1, char2) << "'\n\n";

    double double1 = 8.75, double2 = 3.14;
    std::cout << "Floating-point comparison:\n";
    std::cout << "myMin(" << double1 << ", " << double2 << ") = " 
              << myMin(double1, double2) << "\n";

    return 0;
}