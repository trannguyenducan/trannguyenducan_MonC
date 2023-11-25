#include <iostream>
using namespace std;

int main() {
    int month, year;
    int daysInMonth;

    // Input the month (1-12)
    cout << "Enter a month (1-12): ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Invalid month. Please enter a month between 1 and 12." << endl;
        return 1; // Exit the program with an error code
    }

    // Input the year
    cout << "Enter a year: ";
    cin >> year;

    // Check if it's a leap year
    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    // Determine the number of days in the selected month
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            daysInMonth = isLeapYear ? 29 : 28;
            break;
        default:
            cout << "Invalid month. Please enter a valid month." << endl;
            return 1; // Exit the program with an error code
    }

    cout << daysInMonth << " days" << endl;

    return 0;
}