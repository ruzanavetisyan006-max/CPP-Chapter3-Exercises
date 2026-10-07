#include <iostream>

long long power(long long base, int exponent) {
    if (exponent == 1) {
        return base;
    }

    return base * power(base, exponent - 1);
}

int main() {
    long long base;
    int exponent;

    std::cout << "Enter base: ";
    std::cin >> base;

    std::cout << "Enter exponent (>= 1): ";
    std::cin >> exponent;

    std::cout << base << "^" << exponent << " = " << power(base, exponent) << "\n";

    return 0;
}