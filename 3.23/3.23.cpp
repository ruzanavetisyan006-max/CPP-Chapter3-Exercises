#include <iostream>

void printSquare(int side, char fillCharacter) {
    for (int i = 0; i < side; ++i) {
        for (int j = 0; j < side; ++j) {
            std::cout << fillCharacter;
        }
        std::cout << "\n";
    }
}

int main() {
    int side;
    char fillCharacter;

    std::cout << "Enter side size and character: ";
    std::cin >> side >> fillCharacter;

    printSquare(side, fillCharacter);

    return 0;
}