#include <iostream>
#include <fstream>
using namespace std;

const int MONTHS = 3;
const int DAYS_PER_MONTH = 30;

// Function prototypes
void readWeatherData(char weatherData[MONTHS][DAYS_PER_MONTH]);
void generateReport(const char weatherData[MONTHS][DAYS_PER_MONTH]);

int main() {
    char weatherData[MONTHS][DAYS_PER_MONTH];

    // Read weather data from the file
    readWeatherData(weatherData);

    // Generate and display the report
    generateReport(weatherData);

    return 0;
}

// Function to read weather data from the file
void readWeatherData(char weatherData[MONTHS][DAYS_PER_MONTH]) {
    ifstream inputFile("RainOrShine.txt");

    if (!inputFile) {
        cerr << "Error opening file." << endl;
        exit(1);
    }

    for (int month = 0; month < MONTHS; ++month) {
        for (int day = 0; day < DAYS_PER_MONTH; ++day) {
            inputFile >> weatherData[month][day];
        }
    }

    inputFile.close();
}

// Function to generate and display the report
void generateReport(const char weatherData[MONTHS][DAYS_PER_MONTH]) {
    int rainyCount[MONTHS] = {0};
    int cloudyCount[MONTHS] = {0};
    int sunnyCount[MONTHS] = {0};

    for (int month = 0; month < MONTHS; ++month) {
        for (int day = 0; day < DAYS_PER_MONTH; ++day) {
            switch (weatherData[month][day]) {
                case 'R':
                    rainyCount[month]++;
                    break;
                case 'C':
                    cloudyCount[month]++;
                    break;
                case 'S':
                    sunnyCount[month]++;
                    break;
                default:
                    cerr << "Invalid weather code: " << weatherData[month][day] << endl;
                    exit(1);
            }
        }
    }

    // Display the report
    for (int month = 0; month < MONTHS; ++month) {
        cout << "Month " << month + 6 << ":\n";
        cout << "Rainy days: " << rainyCount[month] << "\n";
        cout << "Cloudy days: " << cloudyCount[month] << "\n";
        cout << "Sunny days: " << sunnyCount[month] << "\n";
        cout << "------------------------\n";
    }

    // Find the month with the largest number of rainy days
    int maxRainyMonth = 0;
    for (int month = 1; month < MONTHS; ++month) {
        if (rainyCount[month] > rainyCount[maxRainyMonth]) {
            maxRainyMonth = month;
        }
    }

    cout << "The month with the largest number of rainy days is Month " << maxRainyMonth + 6 << "." << endl;
}