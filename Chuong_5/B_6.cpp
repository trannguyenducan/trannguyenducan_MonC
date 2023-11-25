#include <iostream>
using namespace std;

int main() {
    double speed;
    int hours;

    // Input speed (miles per hour)
    do {
        cout << "What is the speed of the vehicle in mph? ";
        cin >> speed;
        if (speed < 0) {
            cout << "Please enter a non-negative speed." << endl;
        }
    } while (speed < 0);

    // Input hours (time traveled)
    do {
        cout << "How many hours has it traveled? ";
        cin >> hours;
        if (hours < 1) {
            cout << "Please enter a positive value for time traveled." << endl;
        }
    } while (hours < 1);

    // Display the header
    cout << "Hour\tDistance Traveled" << endl;
    cout << "------------------------" << endl;

    // Calculate and display distance for each hour
    for (int hour = 1; hour <= hours; hour++) {
        double distance = speed * hour;
        cout << hour << "\t" << distance << endl;
    }

    return 0;
}