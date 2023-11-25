#include <iostream>
#include <limits>
using namespace std;
double getSales(const string& divisionName);
void findHighest(double northeast, double southeast, double northwest, double southwest);
int main() 
{
    double northeastSales = getSales("Northeast");
    double southeastSales = getSales("Southeast");
    double northwestSales = getSales("Northwest");
    double southwestSales = getSales("Southwest");
    findHighest(northeastSales, southeastSales, northwestSales, southwestSales);

    return 0;
}
double getSales(const string& divisionName) 
{
    double sales;
    do {
        cout << "Enter the quarterly sales figure for " << divisionName << " division: $";
        while (!(cin >> sales) || sales < 0) {
            cout << "Invalid input. Please enter a non-negative dollar amount: $";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (sales < 0);
    return sales;
}
void findHighest(double northeast, double southeast, double northwest, double southwest) 
{
    double highestSales = northeast;
    string highestDivision = "Northeast";
    if (southeast > highestSales) {
        highestSales = southeast;
        highestDivision = "Southeast";
    }
    if (northwest > highestSales) {
        highestSales = northwest;
        highestDivision = "Northwest";
    }
    if (southwest > highestSales) {
        highestSales = southwest;
        highestDivision = "Southwest";
    }
    cout << "\nThe division with the highest sales is " << highestDivision << " with sales of $" << highestSales << endl;
}