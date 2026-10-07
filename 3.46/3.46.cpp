#include <iostream>

int main() {
    static int count = 1;
    
    std::cout << "main called: " << count++ << "\n";

    main(); 

    return 0;
}