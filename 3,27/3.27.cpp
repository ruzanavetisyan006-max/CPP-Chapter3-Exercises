#include <iostream>
#include <iomanip>

int celsius(int fahrenheit) {
    return (5 * (fahrenheit - 32)) / 9;
}

int fahrenheit(int celsius) {
    return (9 * celsius) / 5 + 32;
}

int main() {
    std::cout << std::left 
              << std::setw(10) << "Celsius" 
              << std::setw(12) << "Fahrenheit" << " | "
              << std::setw(10) << "Celsius" 
              << std::setw(12) << "Fahrenheit" << "\n";

    for (int c = 0; c <= 50; ++c) {
        std::cout << std::left 
                  << std::setw(10) << c 
                  << std::setw(12) << fahrenheit(c) << " | "
                  << std::setw(10) << (c + 50) 
                  << std::setw(12) << fahrenheit(c + 50) << "\n";
    }


    std::cout << std::left 
              << std::setw(12) << "Fahrenheit" 
              << std::setw(10) << "Celsius" << " | "
              << std::setw(12) << "Fahrenheit" 
              << std::setw(10) << "Celsius" << "\n";

    for (int f = 32; f <= 122; ++f) {
        std::cout << std::left 
                  << std::setw(12) << f 
                  << std::setw(10) << celsius(f) << " | "
                  << std::setw(12) << (f + 90) 
                  << std::setw(10) << celsius(f + 90) << "\n";
    }

    return 0;
}