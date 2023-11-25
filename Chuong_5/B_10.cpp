#include <iostream>
using namespace std;

int main() {
    int numYears;

    // Input the number of years (must be 1 or greater)
    do {
        cout << "Enter the number of years: ";
        cin >> numYears;
        if (numYears < 1) {
            cout << "Please enter a number of years greater than or equal to 1." << endl;
        }
    } while (numYears < 1);

    double totalRainfall = 0.0;
    int totalMonths = numYears * 12;

    for (int year = 1; year <= numYears; year++) {
        for (int month = 1; month <= 12; month++) {
            double monthlyRainfall;

            // Input the monthly rainfall (must be non-negative)
            do {
                cout << "Enter the inches of rainfall for Year " << year << ", Month " << month << ": ";
                cin >> monthlyRainfall;
                if (monthlyRainfall < 0) {
                    cout << "Please enter a non-negative value for monthly rainfall." << endl;
                }
            } while (monthlyRainfall < 0);

            totalRainfall += monthlyRainfall;
        }
    }

    double averageRainfall = totalRainfall / totalMonths;

    cout << "Number of months: " << totalMonths << endl;
    cout << "Total inches of rainfall: " << totalRainfall << " inches" << endl;
    cout << "Average rainfall per month: " << averageRainfall << " inches" << endl;

    return 0;
}