#include <iostream>
#include <cstdlib>

float calculateCube(float num) {
    return num * num * num;
}

int getRandomValue() {
    return std::rand();
}

void demonstrateTypeCasting() {
    float originalValue = 123.45678f;
    float convertedValue = originalValue;

    std::cout << "Արժեքը: " << static_cast<float>(convertedValue) << "\n";
}

double calculateSquare(double val) {
    return val * val;
}

int calculateSum(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + calculateSum(n - 1);
}

int main() {
    std::cout << "=== Խնդիր 3.53 - Ուղղված տարբերակներ ===\n\n";

    // a) Тест куба
    std::cout << "a) 3.0-ի խորանարդը: " << calculateCube(3.0f) << "\n";

    // b
    int x = 7;
    std::cout << "b) x = " << x << "\n";

    // c
    std::cout << "c) Պատահական թիվ: " << getRandomValue() << "\n";

    // d
    std::cout << "d) ";
    demonstrateTypeCasting();

    // e
    std::cout << "e) 4.5-ի քառակուսին: " << calculateSquare(4.5) << "\n";

    // f
    std::cout << "f) 1-ից 5 թվերի գումարը: " << calculateSum(5) << "\n";

    return 0;
}