#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int count;
    double x, y;
    
    const double HALF = 0.5;

    cout << "Enter how many numbers you want to round: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        cout << "Enter number: ";
        cin >> x;

        y = floor(x + HALF);

        cout << "Original: " << x << " -> Rounded: " << y << endl;
    }

    return 0;
}