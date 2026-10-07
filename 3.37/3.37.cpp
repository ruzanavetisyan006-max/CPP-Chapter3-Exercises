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

bool askQuestion() {
    int num1 = generateDigit();
    int num2 = generateDigit();
    int correctAnswer = num1 * num2;
    int studentAnswer;

    std::cout << "How much is " << num1 << " times " << num2 << "? ";
    std::cin >> studentAnswer;

    bool isFirstTryCorrect = true;

    while (studentAnswer != correctAnswer) {
        isFirstTryCorrect = false; 
        printIncorrectResponse();
        std::cin >> studentAnswer;
    }

    printCorrectResponse();
    std::cout << "\n";

    return isFirstTryCorrect;
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    const int TOTAL_QUESTIONS = 10;
    int correctCount = 0;

    for (int i = 1; i <= TOTAL_QUESTIONS; ++i) {
        std::cout << "Question " << i << " of " << TOTAL_QUESTIONS << ":\n";
        if (askQuestion()) {
            ++correctCount;
        }
    }

    double percentage = (static_cast<double>(correctCount) / TOTAL_QUESTIONS) * 100.0;

    std::cout << "Correct answers on first try: " << correctCount << " / " << TOTAL_QUESTIONS << "\n";
    std::cout << "Performance: " << percentage << "%\n";

    if (percentage < 75.0) {
        std::cout << "Please ask your instructor for extra help.\n";
    } else {
        std::cout << "Congratulations! You are ready to go to the next level!\n";
    }

    return 0;
}