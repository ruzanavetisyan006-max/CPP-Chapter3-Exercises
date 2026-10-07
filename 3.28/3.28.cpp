#include <iostream>

double smallest(double num1, double num2, double num3) {
    double min = num1;

    if (num2 < min) {
        min = num2;
    }

    if (num3 < min) {
        min = num3;
    }

    return min;
}

int main() {
    double a, b, c;

    std::cout << "Enter three floating-point numbers: ";
    std::cin >> a >> b >> c;

    std::cout << "The smallest number is: " << smallest(a, b, c) << "\n";

    return 0;
}
