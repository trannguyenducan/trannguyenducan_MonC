#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

// Function prototype
double celsius(double fahrenheit);

int main() {
    // Display table header
    cout << "Fahrenheit\tCelsius" << endl;
    cout << "----------------------" << endl;

    // Loop through Fahrenheit temperatures 0 to 20 and display Celsius equivalents
    for (int fahrenheit = 0; fahrenheit <= 20; ++fahrenheit) {
        cout << fixed << setprecision(2); // Set precision for displaying Celsius values
        cout << fahrenheit << "\t\t" << celsius(fahrenheit) << endl;
    }

    return 0;
}

// Function to convert Fahrenheit to Celsius
double celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}