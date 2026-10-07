#include <iostream>
#include <cstdlib>
#include <ctime>

void playGame() {
    int secretNumber = 1 + std::rand() % 1000;
    int guess;

    std::cout << "\nI have a number between 1 and 1000.\n";
    std::cout << "Can you guess my number?\n";
    std::cout << "Please type your first guess: ";
    std::cin >> guess;

    while (guess != secretNumber) {
        if (guess < secretNumber) {
            std::cout << "Too low. Try again.: ";
        } else {
            std::cout << "Too high. Try again.: ";
        }
        std::cin >> guess;
    }

    std::cout << "Excellent! You guessed the number!\n";
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    char playAgain;

    do {
        playGame();
        std::cout << "Would you like to play again (y or n)? ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thanks for playing! Goodbye.\n";

    return 0;
}