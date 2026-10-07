#include <iostream>
#include <cmath>

double hypotenuse(double side1, double side2) {
    return std::sqrt(side1 * side1 + side2 * side2);
}

int main() {
    std::cout << "Triangle 1 (3.0, 4.0): " << hypotenuse(3.0, 4.0) << "\n";
    std::cout << "Triangle 2 (5.0, 12.0): " << hypotenuse(5.0, 12.0) << "\n";
    std::cout << "Triangle 3 (8.0, 15.0): " << hypotenuse(8.0, 15.0) << "\n";

    return 0;
}