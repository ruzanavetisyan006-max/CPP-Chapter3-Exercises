#include <iostream>
#include <cstdlib>
#include <ctime>

int rollDice() {
    int die1 = 1 + std::rand() % 6;
    int die2 = 1 + std::rand() % 6;
    int sum = die1 + die2;
    std::cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << "\n";
    return sum;
}

bool playCrapsGame() {
    enum class Status { CONTINUE, WON, LOST };

    int myPoint = 0;
    Status gameStatus = Status::CONTINUE;
    int sumOfDice = rollDice();

    switch (sumOfDice) {
        case 7:
        case 11:
            gameStatus = Status::WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = Status::LOST;
            break;
        default:
            gameStatus = Status::CONTINUE;
            myPoint = sumOfDice;
            std::cout << "Point is " << myPoint << "\n";
            break;
    }

    while (gameStatus == Status::CONTINUE) {
        sumOfDice = rollDice();

        if (sumOfDice == myPoint) {
            gameStatus = Status::WON;
        } else if (sumOfDice == 7) {
            gameStatus = Status::LOST;
        }
    }

    if (gameStatus == Status::WON) {
        std::cout << "Player wins!\n";
        return true;
    } else {
        std::cout << "Player loses!\n";
        return false;
    }
}

void displayChatter(int wager, int bankBalance) {
    int randomChoice = std::rand() % 3;

    if (wager > bankBalance / 2) {
        std::cout << "\"Oh, you're going for broke, huh?\"\n";
    } else if (wager < 50) {
        std::cout << "\"Aw c'mon, take a chance!\"\n";
    } else {
        switch (randomChoice) {
            case 0:
                std::cout << "\"You're up big. Now's the time to cash in your chips!\"\n";
                break;
            case 1:
                std::cout << "\"Luck is on your side today!\"\n";
                break;
            case 2:
                std::cout << "\"Let's see if the dice favor you this time!\"\n";
                break;
        }
    }
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int bankBalance = 1000;
    int wager = 0;
    char playAgain = 'y';

    std::cout << "Welcome to Craps Casino!\n";
    std::cout << "Your starting bank balance is: $" << bankBalance << "\n\n";

    while (bankBalance > 0 && (playAgain == 'y' || playAgain == 'Y')) {
        std::cout << "Enter your wager: $";
        std::cin >> wager;

        while (wager <= 0 || wager > bankBalance) {
            if (wager <= 0) {
                std::cout << "Wager must be greater than 0. Re-enter wager: $";
            } else {
                std::cout << "You cannot wager more than your bank balance ($" 
                          << bankBalance << "). Re-enter wager: $";
            }
            std::cin >> wager;
        }

        displayChatter(wager, bankBalance);
        std::cout << "\n--- Game Start ---\n";

        // Անցկացնում ենք խաղի մեկ փուլ
        bool won = playCrapsGame();

        if (won) {
            bankBalance += wager;
            std::cout << "New bank balance: $" << bankBalance << "\n";
        } else {
            bankBalance -= wager;
            std::cout << "New bank balance: $" << bankBalance << "\n";

            if (bankBalance == 0) {
                std::cout << "\nSorry. You busted!\n";
                break;
            }
        }

        std::cout << "\nDo you want to play another round (y/n)? ";
        std::cin >> playAgain;
        std::cout << "\n";
    }

    if (bankBalance > 0) {
        std::cout << "Thanks for playing! You leave with $" << bankBalance << ".\n";
    }

    return 0;
}