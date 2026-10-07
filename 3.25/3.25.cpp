#include <iostream>

// a
int integerQuotient(int a, int b) {
    return a / b;
}

// b
int integerRemainder(int a, int b) {
    return a % b;
}

// c
void printDigits(int number) {
    int divisor = 10000;
    bool started = false;

    while (divisor > 0) {
        int digit = integerQuotient(number, divisor);

        if (digit != 0 || started || divisor == 1) {
            std::cout << digit << "  ";
            started = true;
        }

        number = integerRemainder(number, divisor);
        divisor = integerQuotient(divisor, 10);
    }

    std::cout << "\n";
}

int main() {
    int number;

    std::cout << "Enter an integer between 1 and 32767: ";
    std::cin >> number;

    if (number >= 1 && number <= 32767) {
        printDigits(number);
    } else {
        std::cout << "Number is out of range!\n";
    }

    return 0;
}