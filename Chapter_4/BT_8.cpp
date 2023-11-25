#include <iostream>
#include <string>
using namespace std;

int main() {
    string color1, color2, secondaryColor;

    // Input the names of two primary colors
    cout << "Enter the name of the first primary color (red, blue, or yellow): ";
    cin >> color1;

    cout << "Enter the name of the second primary color (red, blue, or yellow): ";
    cin >> color2;

    // Check the combination of colors and determine the secondary color
    if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red")) {
        secondaryColor = "purple";
    } else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red")) {
        secondaryColor = "orange";
    } else if ((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue")) {
        secondaryColor = "green";
    } else {
        cout << "Error: Invalid color combination. Please enter valid primary colors (red, blue, or yellow)." << endl;
        return 1; // Exit the program with an error code
    }

    // Display the secondary color
    cout << "The secondary color is: " << secondaryColor << endl;

    return 0;
}
