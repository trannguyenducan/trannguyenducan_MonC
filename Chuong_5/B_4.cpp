#include <iostream>
using namespace std;

int main() {
    const double caloriesPerMinute = 3.6; // Calories burned per minute
    int minutes[] = {5, 10, 15, 20, 25, 30}; // Minutes to calculate calories burned for

    cout << "Minutes\tCalories Burned" << endl;
    cout << "------------------------" << endl;

    for (int i = 0; i < 6; i++) {
        int minutesRun = minutes[i];
        double caloriesBurned = caloriesPerMinute * minutesRun;
        cout << minutesRun << "\t" << caloriesBurned << " calories" << endl;
    }

    return 0;
}