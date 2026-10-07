#include <iostream>

bool multiple(int firstNumber, int secondNumber) {
    return secondNumber % firstNumber == 0;
}

int main() {
    int firstNumber;
    int secondNumber;

    std::cout << "Enter two integers (or -1 to exit): ";
    while (std::cin >> firstNumber && firstNumber != -1) {
        std::cin >> secondNumber;

        if (multiple(firstNumber, secondNumber)) {
            std::cout << secondNumber << " is a multiple of " << firstNumber << "\n\n";
        } else {
            std::cout << secondNumber << " is NOT a multiple of " << firstNumber << "\n\n";
        }

        std::cout << "Enter two integers (or -1 to exit): ";
    }

    return 0;
}