#include <iostream>

void drawSquare(int side, char fillCharacter) {
    for (int i = 0; i < side; ++i) {
        for (int j = 0; j < side; ++j) {
            std::cout << fillCharacter;
        }
        std::cout << "\n";
    }
}

void drawRectangle(int height, int width, char fillCharacter) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << fillCharacter;
        }
        std::cout << "\n";
    }
}

void drawTriangle(int height, char fillCharacter) {
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << fillCharacter;
        }
        std::cout << "\n";
    }
}

int main() {
    int choice;
    char fillCharacter;

    std::cout << "Select a shape to draw:\n";
    std::cout << "1. Square\n";
    std::cout << "2. Rectangle\n";
    std::cout << "3. Triangle\n";
    std::cout << "Enter choice: ";
    std::cin >> choice;

    std::cout << "Enter character to fill: ";
    std::cin >> fillCharacter;

    if (choice == 1) {
        int side;
        std::cout << "Enter side size: ";
        std::cin >> side;
        drawSquare(side, fillCharacter);
    } else if (choice == 2) {
        int height, width;
        std::cout << "Enter height and width: ";
        std::cin >> height >> width;
        drawRectangle(height, width, fillCharacter);
    } else if (choice == 3) {
        int height;
        std::cout << "Enter height: ";
        std::cin >> height;
        drawTriangle(height, fillCharacter);
    } else {
        std::cout << "Invalid choice!\n";
    }

    return 0;
}