#include <iostream>

template <class A>
A sum(A num1, A num2, A num3) {
    return num1 + num2 + num3;
}

int printResults(int x, int y) {
    std::cout << "The sum is " << x + y << '\n';
    return x + y;
}

template <class A>
A product(A num1, A num2, A num3) {
    return num1 * num2 * num3;
}

double cube(double number) {
    return number * number * number;
}

int cube(int number) {
    return number * number * number;
}

int main() {

    // a)
    std::cout << "a) sum(1, 2, 3) = " << sum(1, 2, 3) << "\n";

    // b)
    std::cout << "b) ";
    int res = printResults(4, 5);

    // c)
    std::cout << "c) product(2, 3, 4) = " << product(2, 3, 4) << "\n";

    // d)
    std::cout << "d) cube(3) [int] = " << cube(3) << "\n";
    std::cout << "   cube(2.5) [double] = " << cube(2.5) << "\n";

    return 0;
}