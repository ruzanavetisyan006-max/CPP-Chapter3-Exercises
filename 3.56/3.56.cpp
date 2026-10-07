#include <iostream>

int tripleByValue(int count) {
    count *= 3;
    return count;
}

void tripleByReference(int& countRef) {
    countRef *= 3;
}

int main() {
    int count = 5;

    std::cout << "Initial value of count: " << count << "\n\n";

    std::cout << "Value returned by tripleByValue(count): " << tripleByValue(count) << "\n";
    std::cout << "Value of count in main after tripleByValue: " << count << "\n\n";

    tripleByReference(count);
    std::cout << "Value of count in main after tripleByReference: " << count << "\n";

    return 0;
}