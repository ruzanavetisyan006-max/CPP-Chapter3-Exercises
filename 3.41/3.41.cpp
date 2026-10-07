#include <iostream>
#include <climits>
#include <limits>
#include <iomanip>

int main() {
    int prevInt = 0;
    int currInt = 1;
    int nInt = 1;

    while (INT_MAX - currInt >= prevInt) {
        int next = prevInt + currInt;
        prevInt = currInt;
        currInt = next;
        nInt++;
    }

    std::cout << "Largest int Fibonacci number is F(" << nInt << ") = " 
              << currInt << "\n\n";

    double prevDouble = 0.0;
    double currDouble = 1.0;
    int nDouble = 1;

    while (true) {
        double next = prevDouble + currDouble;
        if (next == std::numeric_limits<double>::infinity()) {
            break;
        }
        prevDouble = currDouble;
        currDouble = next;
        nDouble++;
    }

    std::cout << "Largest double Fibonacci number before infinity is F(" << nDouble << ") = " 
              << std::scientific << currDouble << "\n";

    return 0;
}