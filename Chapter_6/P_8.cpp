#include <iostream>
#include <cstdlib> // For rand and srand functions
#include <ctime>   // For time function
using namespace std;

// Function prototype
void coinToss();

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Get the number of times to toss the coin from the user
    int numTosses;
    cout << "Enter the number of times you want to toss the coin: ";
    cin >> numTosses;

    // Perform the coin toss simulation
    for (int i = 0; i < numTosses; ++i) {
        cout << "Toss " << i + 1 << ": ";
        coinToss();
    }

    return 0;
}

// Function to simulate a coin toss
void coinToss() {
    // Generate a random number (1 for heads, 2 for tails)
    int result = rand() % 2 + 1;

    // Display the result
    if (result == 1) {
        cout << "Heads" << endl;
    } else {
        cout << "Tails" << endl;
    }
}