#include <iostream>
#include <string>
using namespace std;
int main() {
    const int numSalsas = 5;
    string salsaNames[numSalsas] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int jarsSold[numSalsas];   
    // Input sales data and validate
    for (int i = 0; i < numSalsas; i++) {
        do {
            cout << "Enter the number of jars sold for " << salsaNames[i] << ": ";
            cin >> jarsSold[i];
            if (jarsSold[i] < 0) {
                cout << "Please enter a non-negative value for jars sold." << endl;
            }
        } while (jarsSold[i] < 0);
    }
    // Calculate total sales
    int totalSales = 0;
    for (int i = 0; i < numSalsas; i++) {
        totalSales += jarsSold[i];
    }
    // Find the highest and lowest selling products
    int highestSalesIndex = 0;
    int lowestSalesIndex = 0;
    for (int i = 1; i < numSalsas; i++) {
        if (jarsSold[i] > jarsSold[highestSalesIndex]) {
            highestSalesIndex = i;
        }
        if (jarsSold[i] < jarsSold[lowestSalesIndex]) {
            lowestSalesIndex = i;
        }
    }
    // Display the sales report
    cout << "\nSales Report for Salsas:" << endl;
    for (int i = 0; i < numSalsas; i++) {
        cout << salsaNames[i] << ": " << jarsSold[i] << " jars" << endl;
    }
    cout << "Total Sales: " << totalSales << " jars" << endl;
    cout << "Highest Selling Product: " << salsaNames[highestSalesIndex] << " (" << jarsSold[highestSalesIndex] << " jars)" << endl;
    cout << "Lowest Selling Product: " << salsaNames[lowestSalesIndex] << " (" << jarsSold[lowestSalesIndex] << " jars)" << endl;
    return 0;
}