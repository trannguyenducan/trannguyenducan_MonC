#include <iostream>
using namespace std;
// Function to display numbers in the array greater than n
void displayNumbersGreaterThanN(int arr[], int size, int n)
{
    cout << "Numbers greater than " << n << ": ";
    for (int i = 0; i < size; i++) {
        if (arr[i] > n) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
int main() {
    const int size = 5;
    int numbers[size] = {10, 25, 5, 30, 15};
    int n;
    cout << "Enter a number (n): ";
    cin >> n;
    displayNumbersGreaterThanN(numbers, size, n);
    return 0;
}