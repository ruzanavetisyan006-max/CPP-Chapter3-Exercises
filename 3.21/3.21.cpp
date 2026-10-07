#include <iostream>

bool even(int number) {
    return number % 2 == 0;
}

int main() {
    int number;

    std::cout << "Enter integers (or -1 to exit): ";
    while (std::cin >> number && number != -1) {
        if (even(number)) {
            std::cout << number << " is even.\n\n";
        } else {
            std::cout << number << " is odd.\n\n";
        }

        std::cout << "Enter integers (or -1 to exit): ";
    }

    return 0;
}