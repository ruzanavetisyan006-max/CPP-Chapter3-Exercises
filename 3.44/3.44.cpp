#include <iostream>
#include <string>
#include <iomanip>

unsigned long factorial(int n, int depth = 0) {
    std::string indent(depth * 4, ' ');

    std::cout << indent << "-> factorial(" << n << ") called\n";

    unsigned long result;

    if (n <= 1) {
        std::cout << indent << "   [Base Case Reached: 1! = 1]\n";
        result = 1;
    } else {
        std::cout << indent << "   Calculating: " << n << " * factorial(" << n - 1 << ")\n";
        
        result = n * factorial(n - 1, depth + 1);
    }

    std::cout << indent << "<- Returning " << result << " for factorial(" << n << ")\n";

    return result;
}

int main() {
    int number = 5;

    std::cout << "   VISUALIZING RECURSION: FACTORIAL OF " << number << "\n";

    unsigned long result = factorial(number);

    std::cout << "Final Result: " << number << "! = " << result << "\n";

    return 0;
}