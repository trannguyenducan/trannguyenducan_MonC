//the program sum number in loop from 1 to the entered number
#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;
    // Input a positive integer
    do {
        cout << "Enter a positive integer: ";
        cin >> num;
        if (num <= 0) {
            cout << "Please enter a positive integer." << endl;
        }
    } while (num <= 0);
    // Calculate the sum of integers from 1 to num
    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    // Display the result
    cout << "The sum of integers from 1 to "
         << num << " is: " << sum << endl;
    return 0;
}