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

    const int SINGLE_RATE = 60;   
    const int DOUBLE_RATE = 75; 
    const int KING_RATE = 100; 
    const int SUITE_RATE = 150; 
    const int MIN_FLOORS = 1;
    const int MAX_FLOORS = 5;
    const int MIN_ROOMS = 1;
    const int MAX_ROOMS = 30;

    string typeOfRoom[4] = {"SINGLE", "DOUBLE", "KING", "SUITE"};
    int roomsPerFloor[4]; 
    int occupiedRoomsPerFloor[4]; 
    int numOfFloors = 0; 
    string location;

    cout << "Enter location of hotel: " << endl;
    getline(cin, location);

    
    do { 
        cout << "Enter number of floors: " << endl;
        cin >> numOfFloors; 
    } while (numOfFloors < MIN_FLOORS || numOfFloors > MAX_FLOORS);

    
    for (int x = 1; x <= numOfFloors; x++) {
        do {
            cout << "Enter number of rooms on floor #" << x << ": " << endl; 
            cin >> roomsPerFloor[x-1]; 

            if (roomsPerFloor[x-1] < MIN_ROOMS || roomsPerFloor[x-1] > MAX_ROOMS) {
                cout << "Number of rooms should be between 1 and 30! Try Again!\n" << endl; 
            } 
        } while (numOfRooms < MIN_ROOMS || numOfRooms > MAX_ROOMS);

        do {
            int temp[4]; 
            for (int i = 0; i < 4; i++) {
                cout << "How many " << typeOfRoom[i] + "rooms are occupied on floor #" << x << ": " << endl; 
                cin >> temp[i];
                occupiedRoomsPerFloor[x-1] += temp[i]; 
            }
            
            if (occupiedRoomsPerFloor[x-1] > MAX_ROOMS) {
                cout << "Total number of occupied rooms exceeds the number of available rooms on this floor! Try Again!" << endl; 
            } 
        } while (occupiedRoomsPerFloor[x-1] > MAX_ROOMS);
    }

    cout << "- - - - - - - - - -  - - - - - - - - - -  - - - - - - - - - -  - - - - - - - - - -" << endl; 
    cout << "- - - - - - - - - -  - - - - - - - - - -  - - - - - - - - - -  - - - - - - - - - -" << endl; 
    cout << setw(20) << right << "BlueMont Hotel located in " << location << endl; 
    cout << "- - - - - - - - - -  - - - - - - - - - -  - - - - - - - - - -  - - - - - - - - - -" << endl; 
    cout << "- - - - - - - - - -  - - - - - - - - - -  - - - - - - - - - -  - - - - - - - - - -" << endl; 
    cout << setw(20) << right << "Today's Room Rates(US$/night)" << endl;
    cout << setw(10) << right << "Single Room" << setw(10) << "Double Room" <<  setw(10) << "King Room" << setw(10) << "Suite Room" << endl; 
    cout << setw(10) << right << SINGLE_RATE << setw(10) << DOUBLE_RATE <<  setw(10) << KING_RATE << setw(10) << SUITE_RATE << endl; 
    cout << "- - - - - - - - - -  - - - - - - - - - -  - - - - - - - - - -  - - - - - - - - - -" << endl; 
    cout << "- - - - - - - - - -  - - - - - - - - - -  - - - - - - - - - -  - - - - - - - - - -" << endl;

    return 0;
}