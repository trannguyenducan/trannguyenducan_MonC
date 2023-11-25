#include <iostream>
using namespace std;
int main() {
    const int size = 10;
    int numbers[size];
    // Input values into the array
    cout << "Enter " << size << " integer values, one at a time:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> numbers[i];
    }
    // Find the largest and smallest values
    int largest = numbers[0];
    int smallest = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    // Display the results
    cout << "The largest value is: " << largest << endl;
    cout << "The smallest value is: " << smallest << endl;
    return 0;
}