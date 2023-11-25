#include <iostream>
#include <cmath> // For pow function
using namespace std;

// Function prototype
double futureValue(double presentValue, double monthlyInterestRate, int numMonths);

int main() {
    // Get user input for present value, monthly interest rate, and number of months
    double presentValue;
    double monthlyInterestRate;
    int numMonths;

    cout << "Enter the present value of the account: $";
    cin >> presentValue;

    cout << "Enter the monthly interest rate (as a decimal): ";
    cin >> monthlyInterestRate;

    cout << "Enter the number of months the money will be left in the account: ";
    cin >> numMonths;

    // Calculate and display the future value
    double futureVal = futureValue(presentValue, monthlyInterestRate, numMonths);
    cout << "The future value of the account after " << numMonths << " months is: $" << futureVal << endl;

    return 0;
}

// Function to calculate the future value using the future value formula
double futureValue(double presentValue, double monthlyInterestRate, int numMonths) {
    double futureVal = presentValue * pow(1 + monthlyInterestRate, numMonths);
    return futureVal;
}
