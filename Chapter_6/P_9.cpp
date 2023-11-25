#include <iostream>
#include <cmath> // For pow function
using namespace std;

// Function prototype
double presentValue(double futureValue, double annualInterestRate, int numYears);

int main() {
    // Get user input for future value, annual interest rate, and number of years
    double futureValue;
    double annualInterestRate;
    int numYears;

    cout << "Enter the future value you want in the account: $";
    cin >> futureValue;

    cout << "Enter the annual interest rate (as a decimal): ";
    cin >> annualInterestRate;

    cout << "Enter the number of years the money will sit in the account: ";
    cin >> numYears;

    // Calculate and display the present value
    double presentVal = presentValue(futureValue, annualInterestRate, numYears);
    cout << "You need to deposit $" << presentVal << " today to reach the desired future value." << endl;

    return 0;
}

// Function to calculate the present value using the present value formula
double presentValue(double futureValue, double annualInterestRate, int numYears) {
    double presentVal = futureValue / pow(1 + annualInterestRate, numYears);
    return presentVal;
}