#include <iostream>
#include <cmath>

double roundToInteger(double number) {
    return std::floor(number + 0.5);
}

double roundToTenths(double number) {
    return std::floor(number * 10 + 0.5) / 10;
}

double roundToHundredths(double number) {
    return std::floor(number * 100 + 0.5) / 100;
}

double roundToThousandths(double number) {
    return std::floor(number * 1000 + 0.5) / 1000;
}

int main() {
    double x;

    std::cout << "Enter a number (or -1 to exit): ";
    while (std::cin >> x && x != -1) {
        std::cout << "Original value: " << x << "\n";
        std::cout << "Rounded to integer: " << roundToInteger(x) << "\n";
        std::cout << "Rounded to tenths: " << roundToTenths(x) << "\n";
        std::cout << "Rounded to hundredths: " << roundToHundredths(x) << "\n";
        std::cout << "Rounded to thousandths: " << roundToThousandths(x) << "\n\n";

        std::cout << "Enter a number (or -1 to exit): ";
    }

    return 0;
}