//the program display the ASCII code
#include <iostream>
using namespace std;

int main() {
    const int charsPerLine = 16;

    for (int i = 0; i < 128; i++) {
        cout << static_cast<char>(i) << " ";
        
        // Display 16 characters per line
        if ((i + 1) % charsPerLine == 0) {
            cout << endl;
        }
    }

    return 0;
}