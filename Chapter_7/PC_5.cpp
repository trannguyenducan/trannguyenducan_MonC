#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

const int MONKEYS = 3;
const int DAYS = 5;

// Function prototypes
void inputFoodData(double foodData[MONKEYS][DAYS]);
void printReport(const double foodData[MONKEYS][DAYS]);

int main() {
    double foodData[MONKEYS][DAYS];

    // Input food data for each monkey
    inputFoodData(foodData);

    // Print the report
    printReport(foodData);

    return 0;
}

// Function to input food data for each monkey
void inputFoodData(double foodData[MONKEYS][DAYS]) {
    for (int monkey = 0; monkey < MONKEYS; ++monkey) {
        cout << "Enter food data for Monkey " << monkey + 1 << " for each day of the week:" << endl;

        for (int day = 0; day < DAYS; ++day) {
            do {
                cout << "Enter pounds of food for day " << day + 1 << ": ";
                while (!(cin >> foodData[monkey][day]) || foodData[monkey][day] < 0) {
                    cout << "Invalid input. Please enter a non-negative number: ";
                    cin.clear(); // Clear input buffer to restore cin to a usable state
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                }
            } while (foodData[monkey][day] < 0);
        }
    }
}

// Function to print the report
void printReport(const double foodData[MONKEYS][DAYS]) {
    double total = 0.0;
    double minFood = foodData[0][0];
    double maxFood = foodData[0][0];

    // Calculate total and find min and max food amounts
    for (int monkey = 0; monkey < MONKEYS; ++monkey) {
        for (int day = 0; day < DAYS; ++day) {
            total += foodData[monkey][day];

            if (foodData[monkey][day] < minFood) {
                minFood = foodData[monkey][day];
            }

            if (foodData[monkey][day] > maxFood) {
                maxFood = foodData[monkey][day];
            }
        }
    }

    // Calculate average
    double average = total / (MONKEYS * DAYS);

    // Print the report
    cout << "\nReport:" << endl;
    cout << "Average amount of food eaten per day by the whole family of monkeys: " << average << " pounds" << endl;
    cout << "The least amount of food eaten during the week by any one monkey: " << minFood << " pounds" << endl;
    cout << "The greatest amount of food eaten during the week by any one monkey: " << maxFood << " pounds" << endl;
}
