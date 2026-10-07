#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

int generateNumber(int gradeLevel) {
    int min = std::pow(10, gradeLevel - 1);
    int max = std::pow(10, gradeLevel) - 1;

    if (gradeLevel == 1) {
        return 1 + std::rand() % 9;
    }

    return min + std::rand() % (max - min + 1);
}

void printCorrectResponse() {
    int response = 1 + std::rand() % 4;

    switch (response) {
        case 1: std::cout << "Very good!\n"; break;
        case 2: std::cout << "Excellent!\n"; break;
        case 3: std::cout << "Nice work!\n"; break;
        case 4: std::cout << "Keep up the good work!\n"; break;
    }
}

void printIncorrectResponse() {
    int response = 1 + std::rand() % 4;

    switch (response) {
        case 1: std::cout << "No. Please try again.: "; break;
        case 2: std::cout << "Wrong. Try once more.: "; break;
        case 3: std::cout << "Don't give up!: "; break;
        case 4: std::cout << "No. Keep trying.: "; break;
    }
}

bool askQuestion(int gradeLevel, int operationChoice) {
    int currentOp = operationChoice;

    if (currentOp == 5) {
        currentOp = 1 + std::rand() % 4;
    }

    int num1 = generateNumber(gradeLevel);
    int num2 = generateNumber(gradeLevel);
    int correctAnswer = 0;
    char opSymbol = '+';

    switch (currentOp) {
        case 1:
            correctAnswer = num1 + num2;
            opSymbol = '+';
            break;
        case 2:
            if (num1 < num2) std::swap(num1, num2);
            correctAnswer = num1 - num2;
            opSymbol = '-';
            break;
        case 3:
            correctAnswer = num1 * num2;
            opSymbol = '*';
            break;
        case 4:
            correctAnswer = num1;
            num1 = num1 * num2;
            opSymbol = '/';
            break;
    }

    int studentAnswer;
    std::cout << "How much is " << num1 << " " << opSymbol << " " << num2 << "? ";
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

    int gradeLevel;
    int operationChoice;

    std::cout << "Enter grade level (1 = single digits, 2 = double digits, etc.): ";
    std::cin >> gradeLevel;

    std::cout << "\nChoose arithmetic problem type:\n";
    std::cout << "1: Addition only (+)\n";
    std::cout << "2: Subtraction only (-)\n";
    std::cout << "3: Multiplication only (*)\n";
    std::cout << "4: Division only (/)\n";
    std::cout << "5: Random mixture of all types\n";
    std::cout << "Enter choice (1-5): ";
    std::cin >> operationChoice;


    const int TOTAL_QUESTIONS = 10;
    int correctCount = 0;

    for (int i = 1; i <= TOTAL_QUESTIONS; ++i) {
        std::cout << "Question " << i << " of " << TOTAL_QUESTIONS << ":\n";
        if (askQuestion(gradeLevel, operationChoice)) {
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