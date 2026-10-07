#include <iostream>
#include <cmath>

int getSecondsSinceTwelve(int hours, int minutes, int seconds) {
    return (hours % 12) * 3600 + minutes * 60 + seconds;
}

int main() {
    int h1, m1, s1;
    int h2, m2, s2;

    std::cout << "Enter first time (hours minutes seconds): ";
    std::cin >> h1 >> m1 >> s1;

    std::cout << "Enter second time (hours minutes seconds): ";
    std::cin >> h2 >> m2 >> s2;

    int time1InSeconds = getSecondsSinceTwelve(h1, m1, s1);
    int time2InSeconds = getSecondsSinceTwelve(h2, m2, s2);

    int difference = std::abs(time1InSeconds - time2InSeconds);

    std::cout << "First time in seconds since 12: " << time1InSeconds << "\n";
    std::cout << "Second time in seconds since 12: " << time2InSeconds << "\n";
    std::cout << "Difference in seconds between the two times: " << difference << "\n";

    return 0;
}