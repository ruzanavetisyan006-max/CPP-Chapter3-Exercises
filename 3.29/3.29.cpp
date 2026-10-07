#include <iostream>

bool perfect(int number) {
    int sum = 0;

    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum == number;
}

void printFactors(int number) {
    std::cout << number << " = 1";
    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            std::cout << " + " << i;
        }
    }
    std::cout << "\n";
}

int main() {
    std::cout << "Perfect numbers between 1 and 1000:\n\n";

    for (int i = 1; i <= 1000; ++i) {
        if (perfect(i)) {
            printFactors(i);
        }
    }

    return 0;
}