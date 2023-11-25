#include <iostream>
#include <string>
using namespace std;
int main() {
    const int months = 12;
    double rainfall[months];
    string monthNames[months] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };
    // Input monthly rainfall data (non-negative)
    for (int i = 0; i < months; i++) {
        do {
            cout << "Enter rainfall for " << monthNames[i] << " (in inches): ";
            cin >> rainfall[i];
            if (rainfall[i] < 0) {
                cout << "Please enter a non-negative value for monthly rainfall." << endl;
            }
        } while (rainfall[i] < 0);
    }
    // Calculate total rainfall for the year
    double totalRainfall = 0.0;
    for (int i = 0; i < months; i++) {
        totalRainfall += rainfall[i];
    }
    // Calculate average monthly rainfall
    double averageRainfall = totalRainfall / months;
    // Find the month with the highest and lowest rainfall
    int highestMonth = 0;
    int lowestMonth = 0;
    for (int i = 1; i < months; i++) {
        if (rainfall[i] > rainfall[highestMonth]) {
            highestMonth = i;
        }
        if (rainfall[i] < rainfall[lowestMonth]) {
            lowestMonth = i;
        }
    }
    // Display the results
    cout << "\nTotal rainfall for the year: " << totalRainfall << " inches" << endl;
    cout << "Average monthly rainfall: " << averageRainfall << " inches" << endl;
    cout << "Month with the highest rainfall: " << monthNames[highestMonth] << " (" << rainfall[highestMonth] << " inches)" << endl;
    cout << "Month with the lowest rainfall: " << monthNames[lowestMonth] << " (" << rainfall[lowestMonth] << " inches)" << endl;
    return 0;
}