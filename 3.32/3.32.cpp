#include <iostream>

int gcd(int num1, int num2) {
    while (num2 != 0) {
        int remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    return num1;
}

int main() {
    int a, b;

    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    std::cout << "The greatest common divisor is: " << gcd(a, b) << "\n";

    return 0;
}