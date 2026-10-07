#include <iostream>
#include <cstdlib>
#include <ctime>

int generateDigit() {
    return 1 + std::rand() % 9;
}

void askQuestion() {
    int num1 = generateDigit();
    int num2 = generateDigit();
    int correctAnswer = num1 * num2;
    int studentAnswer;

    std::cout << "How much is " << num1 << " times " << num2 << "? ";
    std::cin >> studentAnswer;

    while (studentAnswer != correctAnswer) {
        std::cout << "No. Please try again.: ";
        std::cin >> studentAnswer;
    }

    std::cout << "Very good!\n\n";
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::cout << "--- Multiplication Learning Program ---\n\n";

    while (true) {
        askQuestion();
    }

    return 0;
}