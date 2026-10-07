#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges(double hours);

int main()
{
    const int NUM_CUSTOMERS = 3;
    double totalHours = 0.0;
    double totalCharges = 0.0;

    cout << fixed << setprecision(1);
    double hours[NUM_CUSTOMERS];

    for (int i = 0; i < NUM_CUSTOMERS; i++) {
        cout << "Enter hours parked for car " << i + 1 << ": ";
        cin >> hours[i];
    }

    cout << "\n" << left << setw(10) << "Car"
         << setw(10) << "Hours"
         << "Charge\n";

    for (int i = 0; i < NUM_CUSTOMERS; i++) {
        double charge = calculateCharges(hours[i]);
        totalHours += hours[i];
        totalCharges += charge;

        cout << left << setw(10) << i + 1
             << setw(10) << setprecision(1) << hours[i]
             << setprecision(2) << charge << "\n";
    }

    cout << left << setw(10) << "TOTAL"
         << setw(10) << setprecision(1) << totalHours
         << setprecision(2) << totalCharges << endl;

    return 0;
}

double calculateCharges(double hours)
{
    const double MIN_FEE = 2.00;
    const double HOURLY_RATE = 0.50;
    const double MAX_FEE = 10.00;
    const double MIN_HOURS = 3.0;

    double charge = MIN_FEE;

    if (hours > MIN_HOURS)
        charge += HOURLY_RATE * ceil(hours - MIN_HOURS);
        
    if (charge > MAX_FEE)
        charge = MAX_FEE;

    return charge;
}