#include <iostream>

// Ֆունկցիայի շաբլոն (Function Template) 3 արգումենտներից մեծագույնը գտնելու համար
template <typename T>
T myMax(T a, T b, T c) {
    T maxVal = a;

    if (b > maxVal) {
        maxVal = b;
    }
    if (c > maxVal) {
        maxVal = c;
    }

    return maxVal;
}

int main() {


    int int1 = 15, int2 = 42, int3 = 27;
    std::cout << "Integer comparison:\n";
    std::cout << "myMax(" << int1 << ", " << int2 << ", " << int3 << ") = " 
              << myMax(int1, int2, int3) << "\n\n";

    char char1 = 'A', char2 = 'Z', char3 = 'M';
    std::cout << "Character comparison:\n";
    std::cout << "myMax('" << char1 << "', '" << char2 << "', '" << char3 << "') = '" 
              << myMax(char1, char2, char3) << "'\n\n";

    double double1 = 8.75, double2 = 3.14, double3 = 12.91;
    std::cout << "Floating-point comparison:\n";
    std::cout << "myMax(" << double1 << ", " << double2 << ", " << double3 << ") = " 
              << myMax(double1, double2, double3) << "\n";

    return 0;
}