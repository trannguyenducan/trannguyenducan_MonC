#include <iostream>
using namespace std;

int main() {
    int numFloors;
    int totalRooms = 0;
    int totalOccupied = 0;

    cout << "Enter the number of floors in the hotel: ";
    cin >> numFloors;

    for (int floor = 1; floor <= numFloors; floor++) {
        int numRoomsOnFloor, numOccupiedOnFloor;
        
        cout << "Enter the number of rooms on floor " << floor << ": ";
        cin >> numRoomsOnFloor;

        cout << "Enter the number of occupied rooms on floor " << floor << ": ";
        cin >> numOccupiedOnFloor;

        totalRooms += numRoomsOnFloor;
        totalOccupied += numOccupiedOnFloor;
    }

    double occupancyRate = static_cast<double>(totalOccupied) / totalRooms * 100;

    cout << "Total number of rooms in the hotel: " << totalRooms << endl;
    cout << "Total number of rooms occupied: " << totalOccupied << endl;
    cout << "Total number of rooms unoccupied: " << totalRooms - totalOccupied << endl;
    cout << "Occupancy rate: " << occupancyRate << "%" << endl;

    return 0;
}