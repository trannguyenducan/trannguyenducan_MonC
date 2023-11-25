#include <iostream>
#include <cmath> // For the pow function
using namespace std;

// Function prototype
double fallingDistance(int time);

int main() {
    // Display table header
    cout << "Time (s)\tDistance (m)" << endl;
    cout << "------------------------" << endl;

    // Loop through time values 1 to 10 and display the falling distance
    for (int time = 1; time <= 10; ++time) {
        cout << time << "\t\t" << fallingDistance(time) << endl;
    }

    return 0;
}

// Function to calculate falling distance
double fallingDistance(int time) {
    const double gravity = 9.8; // Acceleration due to gravity in m/s^2
    return 0.5 * gravity * pow(time, 2);
}
