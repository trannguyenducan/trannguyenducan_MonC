#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate two random numbers for addition
    int num1 = rand() % 1000;
    int num2 = rand() % 1000;

    // Display the addition problem
    cout << "  " << num1 << endl
         << "+ " << num2 << endl
         << "------" << endl;

    // Get the user's answer
    int userAnswer;
    cout << "Enter your answer: ";
    cin >> userAnswer;

    // Check the answer
    if (userAnswer == (num1 + num2)) {
        cout << "Congratulations! That's the correct answer." << endl;
    } else {
        cout << "Sorry, the correct answer is: " << num1 + num2 << endl;
    }

    return 0;
}
