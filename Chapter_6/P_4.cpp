#include <iostream>
#include <limits> 
using namespace std;
int getNumAccidents(const string& regionName);
void findLowest(int north, int south, int east, int west, int central);

int main() 
{
    int accidentsNorth = getNumAccidents("North");
    int accidentsSouth = getNumAccidents("South");
    int accidentsEast = getNumAccidents("East");
    int accidentsWest = getNumAccidents("West");
    int accidentsCentral = getNumAccidents("Central");
    findLowest(accidentsNorth, accidentsSouth, accidentsEast, accidentsWest, accidentsCentral);
    return 0;
}
int getNumAccidents(const string& regionName) {
    int accidents;
    do {
        cout << "Enter the number of automobile accidents reported in the " << regionName << " region: ";
        while (!(cin >> accidents) || accidents < 0) {
            cout << "Invalid input. Please enter a non-negative integer: ";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
    } while (accidents < 0);
    return accidents;
}
void findLowest(int north, int south, int east, int west, int central) {
    int lowestAccidents = north;
    string lowestRegion = "North";
    if (south < lowestAccidents) {
        lowestAccidents = south;
        lowestRegion = "South";
    }
    if (east < lowestAccidents) {
        lowestAccidents = east;
        lowestRegion = "East";
    }
    if (west < lowestAccidents) {
        lowestAccidents = west;
        lowestRegion = "West";
    }
    if (central < lowestAccidents) {
        lowestAccidents = central;
        lowestRegion = "Central";
    }
    cout << "\nThe region with the fewest accidents is " << lowestRegion << " with " << lowestAccidents << " reported accidents." << endl;
}