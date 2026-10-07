#include <iostream>
#include <cstdlib>
#include <ctime>

int generateDigit() {
    return 1 + std::rand() % 9;
}

void printCorrectResponse() {
    int response = 1 + std::rand() % 4;

    switch (response) {
        case 1:
            std::cout << "Very good!\n";
            break;
        case 2:
            std::cout << "Excellent!\n";
            break;
        case 3:
            std::cout << "Nice work!\n";
            break;
        case 4:
            std::cout << "Keep up the good work!\n";
            break;
    }
}

void printIncorrectResponse() {
    int response = 1 + std::rand() % 4;

    switch (response) {
        case 1:
            std::cout << "No. Please try again.: ";
            break;
        case 2:
            std::cout << "Wrong. Try once more.: ";
            break;
        case 3:
            std::cout << "Don't give up!: ";
            break;
        case 4:
            std::cout << "No. Keep trying.: ";
            break;
    }
}

void askQuestion() {
    int num1 = generateDigit();
    int num2 = generateDigit();
    int correctAnswer = num1 * num2;
    int studentAnswer;

    std::cout << "How much is " << num1 << " times " << num2 << "? ";
    std::cin >> studentAnswer;

    while (studentAnswer != correctAnswer) {
        printIncorrectResponse();
        std::cin >> studentAnswer;
    }

    printCorrectResponse();
    std::cout << "\n";
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    while (true) {
        askQuestion();
    }

    return 0;
}