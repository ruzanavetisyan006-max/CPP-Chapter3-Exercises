#include <iostream>

void towerOfHanoi(int totalDisks, int sourcePeg, int destinationPeg, int tempPeg) {
    if (totalDisks == 1) {
        std::cout << sourcePeg << " -> " << destinationPeg << "\n";
        return;
    }

    towerOfHanoi(totalDisks - 1, sourcePeg, tempPeg, destinationPeg);

    std::cout << sourcePeg << " -> " << destinationPeg << "\n";

    towerOfHanoi(totalDisks - 1, tempPeg, destinationPeg, sourcePeg);
}

int main() {
    int numberOfDisks;

    std::cout << "Enter the number of disks: ";
    std::cin >> numberOfDisks;

    std::cout << "\nThe sequence of moves is:\n";
    towerOfHanoi(numberOfDisks, 1, 3, 2);

    return 0;
}