#include <iostream>
#include <cstdlib>
#include <ctime>

void playGame() {
    int secretNumber = 1 + std::rand() % 1000;
    int guess;
    int guessCount = 0;

    std::cout << "\nI have a number between 1 and 1000.\n";
    std::cout << "Can you guess my number?\n";
    std::cout << "Please type your first guess: ";
    std::cin >> guess;
    ++guessCount;

    while (guess != secretNumber) {
        if (guess < secretNumber) {
            std::cout << "Too low. Try again.: ";
        } else {
            std::cout << "Too high. Try again.: ";
        }
        std::cin >> guess;
        ++guessCount;
    }

    std::cout << "\nExcellent! You guessed the number!\n";

    if (guessCount < 10) {
        std::cout << "Either you know the secret or you got lucky!\n";
    } else if (guessCount == 10) {
        std::cout << "Ahah! You know the secret!\n";
    } else {
        std::cout << "You should be able to do better!\n";
    }
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    char playAgain;

    do {
        playGame();
        std::cout << "\nWould you like to play again (y or n)? ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thanks for playing! Goodbye.\n";

    return 0;
}