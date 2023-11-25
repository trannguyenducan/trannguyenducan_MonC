#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int days;
    
    // Input the number of days worked
    do {
        cout << "Enter the number of days worked (must be 1 or greater): ";
        cin >> days;
        if (days < 1) {
            cout << "Please enter a number of days greater than or equal to 1." << endl;
        }
    } while (days < 1);
    
    double totalPay = 0.01; // Start with one penny on the first day
    cout << "Day\tSalary (in dollars)" << endl;
    cout << "------------------------" << endl;
    
    for (int day = 1; day <= days; day++) {
        cout << day << "\t$" << fixed << setprecision(2) << totalPay << endl;
        totalPay *= 2; // Double the salary for the next day
    }
    
    cout << "\nTotal earnings over " << days << " days: $" 
         << fixed << setprecision(2) << totalPay << endl;
    
    return 0;
}