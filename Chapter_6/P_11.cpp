#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

// Function prototypes
void getScore(int &score);
void calcAverage(int score1, int score2, int score3, int score4, int score5);
int findLowest(int score1, int score2, int score3, int score4, int score5);

int main() {
    int score1, score2, score3, score4, score5;

    // Get test scores
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    // Calculate and display the average of the four highest scores
    calcAverage(score1, score2, score3, score4, score5);

    return 0;
}

// Function to get a test score and validate it
void getScore(int &score) {
    do {
        cout << "Enter a test score (0-100): ";
        while (!(cin >> score) || score < 0 || score > 100) {
            cout << "Invalid input. Please enter a score between 0 and 100: ";
            cin.clear(); // Clear input buffer to restore cin to a usable state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }
    } while (score < 0 || score > 100);
}

// Function to calculate and display the average of the four highest scores
void calcAverage(int score1, int score2, int score3, int score4, int score5) {
    int lowestScore = findLowest(score1, score2, score3, score4, score5);
    double average = (score1 + score2 + score3 + score4 + score5 - lowestScore) / 4.0;

    cout << "The average of the four highest scores is: " << average << endl;
}

// Function to find the lowest of the five scores
int findLowest(int score1, int score2, int score3, int score4, int score5) {
    int lowest = score1;

    if (score2 < lowest) lowest = score2;
    if (score3 < lowest) lowest = score3;
    if (score4 < lowest) lowest = score4;
    if (score5 < lowest) lowest = score5;

    return lowest;
}