#include <iostream>

int reverseDigits(int number) {
    const int BASE = 10;
    int reversed = 0;

    while (number > 0) {
        int lastDigit = number % BASE;
        reversed = reversed * BASE + lastDigit;
        number /= BASE;
    }

    return reversed;
}

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    std::cout << "Reversed number: " << reverseDigits(number) << "\n";

    return 0;
}