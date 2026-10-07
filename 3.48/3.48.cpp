#include <iostream>
#include <cmath>

double distance(double x1, double y1, double x2, double y2) {
    double deltaX = x2 - x1;
    double deltaY = y2 - y1;
    return std::sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main() {
    double x1, y1, x2, y2;

    std::cout << "Enter x1 and y1: ";
    std::cin >> x1 >> y1;

    std::cout << "Enter x2 and y2: ";
    std::cin >> x2 >> y2;

    double d = distance(x1, y1, x2, y2);

    std::cout << "The distance between (" << x1 << ", " << y1 << ") and ("
              << x2 << ", " << y2 << ") is: " << d << "\n";

    return 0;
}