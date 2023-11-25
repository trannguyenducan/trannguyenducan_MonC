#include <iostream>
using namespace std;

int main() {
    double membershipFee = 2500.0; // Current membership fee
    double annualIncreaseRate = 0.04; // 4% increase rate

    cout << "Year\tProjected Fee" << endl;
    cout << "-------------------" << endl;

    for (int year = 1; year <= 6; year++) {
        // Calculate the projected fee for the current year
        membershipFee *= (1 + annualIncreaseRate);
        
        cout << year << "\t$" << membershipFee << endl;
    }

    return 0;
}