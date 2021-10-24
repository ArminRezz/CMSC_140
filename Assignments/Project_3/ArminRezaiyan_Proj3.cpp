/*
* Class: CMSC 140 
* Instructor: Proffesor Shah
* Project/<2>
* Description: Express given age in many different units and demonstrate the operators in c++
* Due Date: 10/11/2021
* I pledge that I have completed the programming assignment independently. 
* I have not copied the code from a student or any source
* I have not given my code to any student
* Name: Armin Rezaiyan-Nojani 
*
* Psuedocode: 
*
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h> 
using namespace std;

int main() {

    const string PROGGRAMMER_NAME = "Armin Rezaiyan";
    const int ASSIGNMENT_NUMBER = 3; 
    const string DUE_DATE = "10/29/2021";
    const int SINGLE_RATE = 60;   
    const int DOUBLE_RATE = 75; 
    const int KING_RATE = 100; 
    const int SUITE_RATE = 150; 
    const int MIN_FLOORS = 1;
    const int MAX_FLOORS = 5;
    const int MIN_ROOMS = 1;
    const int MAX_ROOMS = 30;

    int roomsPerFloor[4]; 
    int numOfFloors = 0; 
    double hotelIncome = 0.0; 
    int totalOccupiedRooms = 0; 
    int totalUnoccupiedRooms = 0;
    int floorWithMinRooms = 0; 
    double rateOfOccupancy = 0.0; 
    int min = 0; 
    int totalRooms = 0; 
    string location;

    cout << "Enter location of hotel: " << endl;
    getline(cin, location);

    
    // get the total number of floors
    do { 
        cout << "Enter number of floors: " << endl;
        cin >> numOfFloors; 
    } while (numOfFloors < MIN_FLOORS || numOfFloors > MAX_FLOORS);

    // get rooms per floor and type of rooms per floor for each floor
    for (int x = 1; x <= numOfFloors; x++) {

        // get number of rooms on given floor
        do {
            cout << "Enter number of rooms on floor #" << x << ": " << endl; 
            cin >> roomsPerFloor[x-1]; 

            if (roomsPerFloor[x-1] < MIN_ROOMS || roomsPerFloor[x-1] > MAX_ROOMS) {
                cout << "Number of rooms should be between 1 and 30! Try Again!\n" << endl; 
            } 
        } while (roomsPerFloor[x-1] < MIN_ROOMS || roomsPerFloor[x-1] > MAX_ROOMS);

        // get number of each type of room from each floor
        int occupiedRooms = 0; 
        do {
            int single = 0, doubleCnt = 0, king = 0, suite = 0; 
            occupiedRooms = 0; 

            cout << "How many single rooms are occupied on floor #" << x << ": " << endl; 
            cin >> single;
            cout << "How many double rooms are occupied on floor #" << x << ": " << endl; 
            cin >> doubleCnt;
            cout << "How many king rooms are occupied on floor #" << x << ": " << endl; 
            cin >> king;
            cout << "How many suite rooms are occupied on floor #" << x << ": " << endl; 
            cin >> suite;

            occupiedRooms += single + doubleCnt + king + suite; 
            if (occupiedRooms > roomsPerFloor[x-1]) {
                cout << "Total number of occupied rooms exceeds the number of available rooms on this floor! Try Again!" << endl; 
            } else {
                totalOccupiedRooms += occupiedRooms;
                hotelIncome += (single * SINGLE_RATE) + (doubleCnt * DOUBLE_RATE) + (king * KING_RATE) + (suite * SUITE_RATE); 
            }
        
        } while (occupiedRooms > roomsPerFloor[x-1]);

        // change min floor value if needed, add to totalRooms
        if (roomsPerFloor[x-1] < min) { 
            floorWithMinRooms = x; 
        }
        totalRooms += roomsPerFloor[x-1];
    }

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << setw(60) << right << "BlueMont Hotel located in " << location << endl; 
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << setw(59) << right << "Today's Room Rates(US$/night)" << endl;
    cout << setw(20) << right << "Single Room" << setw(20) << "Double Room" <<  setw(20) << "King Room" << setw(20) << "Suite Room" << endl; 
    cout << setw(20) << right << SINGLE_RATE << setw(20) << DOUBLE_RATE <<  setw(20) << KING_RATE << setw(20) << SUITE_RATE << endl; 
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    totalUnoccupiedRooms = totalRooms - totalOccupiedRooms;
    rateOfOccupancy = (static_cast<float>(totalOccupiedRooms) / totalRooms) * 100;

    cout << setw(25) << right << "Hotel Income: " << hotelIncome << endl;
    cout << setw(25) << right << "Total # of Rooms: " << totalRooms << endl;
    cout << setw(25) << right << "Occupied Rooms: " << totalOccupiedRooms << endl;
    cout << setw(25) << right << "Unoccupied Rooms: " << totalUnoccupiedRooms << endl;
    cout << setw(25) << right << "Occupancy Rate: " << rateOfOccupancy << endl;

    if (rateOfOccupancy < 60) {
        cout << "Your occupancy rate is less than 60%, improve your hotel!" << endl; 
    }

    // display project information
    cout << "PROGRAMMER: " << PROGGRAMMER_NAME << endl;
    cout << "CMSC140 Common Project " << ASSIGNMENT_NUMBER << endl;
    cout << "Due Date: " << DUE_DATE << endl;
    
    return 0;
}