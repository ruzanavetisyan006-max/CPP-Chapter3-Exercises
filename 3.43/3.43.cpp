#include <iostream>
#include <cmath>
#include <vector>

void moveDisksBetweenPegs(std::vector<int>& src, std::vector<int>& dest, int srcPeg, int destPeg) {
    if (src.empty() && dest.empty()) return;

    if (src.empty()) {
        src.push_back(dest.back());
        dest.pop_back();
        std::cout << destPeg << " -> " << srcPeg << "\n";
    } else if (dest.empty()) {
        dest.push_back(src.back());
        src.pop_back();
        std::cout << srcPeg << " -> " << destPeg << "\n";
    } else if (src.back() > dest.back()) {
        src.push_back(dest.back());
        dest.pop_back();
        std::cout << destPeg << " -> " << srcPeg << "\n";
    } else {
        dest.push_back(src.back());
        src.pop_back();
        std::cout << srcPeg << " -> " << destPeg << "\n";
    }
}

void towersOfHanoiIterative(int totalDisks) {
    int totalMoves = std::pow(2, totalDisks) - 1;

    std::vector<int> peg1, peg2, peg3;

    for (int i = totalDisks; i >= 1; --i) {
        peg1.push_back(i);
    }

    int src = 1, dest = 3, temp = 2;
    if (totalDisks % 2 == 0) {
        dest = 2;
        temp = 3;
    }

    for (int i = 1; i <= totalMoves; ++i) {
        if (i % 3 == 1) {
            moveDisksBetweenPegs(peg1, peg3, 1, 3);
        } else if (i % 3 == 2) {
            moveDisksBetweenPegs(peg1, peg2, 1, 2);
        } else if (i % 3 == 0) {
            moveDisksBetweenPegs(peg2, peg3, 2, 3);
        }
    }
}

int main() {
    int numberOfDisks;
    std::cout << "Enter the number of disks: ";
    std::cin >> numberOfDisks;

    std::cout << "\nThe sequence of moves (Iterative) is:\n";
    towersOfHanoiIterative(numberOfDisks);

    return 0;
}