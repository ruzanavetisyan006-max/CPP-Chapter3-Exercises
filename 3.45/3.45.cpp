#include <iostream>

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    
    return gcd(y, x % y);
}

int main() {
    int x, y;

    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    std::cout << "The greatest common divisor of " << x << " and " << y 
              << " is: " << gcd(x, y) << "\n";

    return 0;
}