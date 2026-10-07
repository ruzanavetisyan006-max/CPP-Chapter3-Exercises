#include <iostream>

int integerPower(int base, int exponent) {
    int result = 1;

    for (int i = 1; i <= exponent; ++i) {
        result *= base;
    }

    return result;
}

int main() {
    int base;
    int exponent;

    std::cout << "Enter base and exponent: ";
    std::cin >> base >> exponent;

    std::cout << base << "^" << exponent << " = " << integerPower(base, exponent) << "\n";

    return 0;
}