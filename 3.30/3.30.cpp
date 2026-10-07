#include <iostream>
#include <cmath>


bool isPrimeHalf(int n, long long& testCount) {
    if (n < 2) return false;

    for (int i = 2; i <= n / 2; ++i) {
        testCount++;
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}


bool isPrimeSqrt(int n, long long& testCount) {
    if (n < 2) return false;

    int limit = static_cast<int>(std::sqrt(n));
    for (int i = 2; i <= limit; ++i) {
        testCount++;
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    long long testsHalf = 0;
    long long testsSqrt = 0;
    int primeCount = 0;

    std::cout << "Prime numbers between 2 and 10,000:\n\n";

    for (int i = 2; i <= 10000; ++i) {
        if (isPrimeSqrt(i, testsSqrt)) {
            std::cout << i << " ";
            primeCount++;
        }
        
        isPrimeHalf(i, testsHalf);
    }

    std::cout << "Total prime numbers found: " << primeCount << "\n";
    std::cout << "Total tests using n / 2:   " << testsHalf << "\n";
    std::cout << "Total tests using sqrt(n): " << testsSqrt << "\n";
    
    if (testsSqrt > 0) {
        std::cout << "Performance improvement:   ~" 
                  << testsHalf / testsSqrt << " times faster!\n";
    }

    return 0;
}