#include <iostream>
using namespace std;

int main() {
    char choice;
    
    do {
        cout << "Math Quiz Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Quit" << endl;
        cout << "Select an option (1-5): ";
        cin >> choice;
        
        switch (choice) {
            case '1':
                // Addition
                int num1, num2;
                cout << "Enter two numbers to add: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;
                
            case '2':
                // Subtraction
                cout << "Enter two numbers to subtract (minuend and subtrahend): ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;
                
            case '3':
                // Multiplication
                cout << "Enter two numbers to multiply: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 * num2 << endl;
                break;
                
            case '4':
                // Division
                double dividend, divisor;
                cout << "Enter dividend and divisor: ";
                cin >> dividend >> divisor;
                if (divisor == 0) {
                    cout << "Error: Division by zero." << endl;
                } else {
                    cout << "Result: " << dividend / divisor << endl;
                }
                break;
                
            case '5':
                // Quit
                cout << "Goodbye!" << endl;
                break;
                
            default:
                // Invalid choice
                cout << "Invalid choice. Please select an option from the menu (1-5)." << endl;
                break;
        }
        
        cin.ignore(); // Clear newline from input buffer
        cout << endl;
    } while (choice != '5');

    return 0;
}