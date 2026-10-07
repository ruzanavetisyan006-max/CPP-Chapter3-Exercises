#include <iostream>
#include <cmath>

inline double circleArea(double radius) {
    const double PI = 3.141592653589793;
    return PI * radius * radius; 
}

int main() {
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    if (radius < 0) {
        std::cout << "Radius cannot be negative!\n";
    } else {
        std::cout << "The area of the circle with radius " << radius 
                  << " is: " << circleArea(radius) << "\n";
    }

    return 0;
}