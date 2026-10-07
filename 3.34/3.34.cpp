#include <iostream>
#include <cstdlib>
#include <ctime>

int flip() {
    return std::rand() % 2;
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int headsCount = 0;
    int tailsCount = 0;

    const int TOTAL_FLIPS = 100;

    for (int i = 1; i <= TOTAL_FLIPS; ++i) {
        int result = flip();

        if (result == 1) {
            ++headsCount;
            std::cout << "Heads ";
        } else {
            ++tailsCount;
            std::cout << "Tails ";
        }

        if (i % 10 == 0) {
            std::cout << "\n";
        }
    }

    std::cout << "Total Heads: " << headsCount << "\n";
    std::cout << "Total Tails: " << tailsCount << "\n";

    return 0;
}