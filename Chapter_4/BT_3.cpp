#include <iostream>

int main() {
    int month, day, year;

    // Ask the user for input
    std::cout << "Enter a month (numeric form): ";
    std::cin >> month;

    std::cout << "Enter a day: ";
    std::cin >> day;

    std::cout << "Enter a two-digit year: ";
    std::cin >> year;

    // Calculate the product of month and day
    int product = month * day;

    // Check if the product is equal to the year
    if (product == year) {
        std::cout << "The date " << month << "/" << day << "/" << year << " is magic!" << std::endl;
    } else {
        std::cout << "The date " << month << "/" << day << "/" << year << " is not magic." << std::endl;
    }

    return 0;
}