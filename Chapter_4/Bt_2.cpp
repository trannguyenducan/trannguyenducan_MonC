#include <iostream>

int main() {
    int number;
    
    // Ask the user for input and validate it
    while (true) {
        std::cout << "Enter a number between 1 and 10: ";
        std::cin >> number;
        
        if (number >= 1 && number <= 10) {
            break; // Valid input, exit the loop
        } else {
            std::cout << "Invalid input. Please enter a number within the specified range." << std::endl;
        }
    }
    
    // Display Roman numeral version based on the input
    std::string romanNumeral;
    switch (number) {
        case 1:
            romanNumeral = "I";
            break;
        case 2:
            romanNumeral = "II";
            break;
        case 3:
            romanNumeral = "III";
            break;
        case 4:
            romanNumeral = "IV";
            break;
        case 5:
            romanNumeral = "V";
            break;
        case 6:
            romanNumeral = "VI";
            break;
        case 7:
            romanNumeral = "VII";
            break;
        case 8:
            romanNumeral = "VIII";
            break;
        case 9:
            romanNumeral = "IX";
            break;
        case 10:
            romanNumeral = "X";
            break;
    }
    
    std::cout << "The Roman numeral version of " << number << " is " << romanNumeral << std::endl;
    
    return 0;
}
