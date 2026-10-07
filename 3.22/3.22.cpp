#include <iostream>

void printSquare(int side) {
    for (int i = 0; i < side; ++i) {
        for (int j = 0; j < side; ++j) {
            std::cout << '*';
        }
        std::cout << "\n";
    }
}

int main() {
    int side;

    std::cout << "Enter the side size: ";
    std::cin >> side;

    printSquare(side);

    return 0;
}