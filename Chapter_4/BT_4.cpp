#include <iostream>

int main() {
    double length1, width1, length2, width2;

    // Input for the first rectangle
    std::cout << "Enter the length of the first rectangle: ";
    std::cin >> length1;

    std::cout << "Enter the width of the first rectangle: ";
    std::cin >> width1;

    // Input for the second rectangle
    std::cout << "Enter the length of the second rectangle: ";
    std::cin >> length2;

    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> width2;

    // Calculate the areas of the rectangles
    double area1 = length1 * width1;
    double area2 = length2 * width2;

    // Compare the areas and display the result
    if (area1 > area2) {
        std::cout << "The first rectangle has a greater area." << std::endl;
    } else if (area2 > area1) {
        std::cout << "The second rectangle has a greater area." << std::endl;
    } else {
        std::cout << "Both rectangles have the same area." << std::endl;
    }

    return 0;
}