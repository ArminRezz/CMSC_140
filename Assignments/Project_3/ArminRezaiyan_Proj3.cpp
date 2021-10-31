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
* 1. Declare constants and important variables
* 2. Read location of hotel
* 3. do (ask user for number of floors)
*    while (num of floors is not in range 1-5)
* 4. for (number of floors) 
        do (ask user for num of rooms on floor)
        while (num of rooms is not in range 1-30)

        do (ask user for num of occupied rooms - by type) 
        while (occupied rooms greater than number of rooms)

        check if current floor is min floor and assign minfloor a value if so
* 5. Calculate Hotel Income, Total # of Rooms, occupied Roomsl, Unoccupied Rooms, and Occupancy Rate
* 6. Print all the information in orderly format
* 7. if occupancy rate is less than 60, print message to improve
* 8. Display proggramer info
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    // declaring all proggram variables and constants
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

    int roomsOnFloor = 0; 
    int totalRooms = 0; 
    int minRooms = 0; 
    int floorWithMinRooms = 0; 
    int numOfFloors = 0; 
    int totalOccupiedRooms = 0; 
    int totalUnoccupiedRooms = 0;

    double hotelIncome = 0.0; 
    double rateOfOccupancy = 0.0; 
    
    string location;

    cout << "Enter the location of the hotel chain: " << endl;
    getline(cin, location);

    
    // get the total number of floors
    do { 
        cout << "\nEnter total number of floors in the hotel: " << endl;
        cin >> numOfFloors; 
        if (numOfFloors < MIN_FLOORS || numOfFloors > MAX_FLOORS) {
            cout << "Number of floors should be between 1 and 5! Try Again!" << endl; 
        }
    } while (numOfFloors < MIN_FLOORS || numOfFloors > MAX_FLOORS);

    // get rooms per floor and type of rooms per floor for each floor
    for (int x = 1; x <= numOfFloors; x++) {

        // get number of rooms on given floor
        do {
            cout << "Enter number of rooms on floor #" << x << ": " << endl; 
            cin >> roomsOnFloor; 

             if (roomsOnFloor < MIN_ROOMS || roomsOnFloor > MAX_ROOMS) {
                cout << "Number of rooms should be between 1 and 30! Try Again!\n" << endl; 
            } 

        } while (roomsOnFloor < MIN_ROOMS || roomsOnFloor > MAX_ROOMS);

        // get number of occupied rooms per floor by type  
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
            if (occupiedRooms > roomsOnFloor) {
                cout << "Total number of occupied rooms exceeds the number of available rooms on this floor! Try Again!" << endl; 
            } else {
                totalOccupiedRooms += occupiedRooms;
                hotelIncome += (single * SINGLE_RATE) + (doubleCnt * DOUBLE_RATE) + (king * KING_RATE) + (suite * SUITE_RATE); 
            }
        
        } while (occupiedRooms > roomsOnFloor);

        // update floor with least rooms
        if (roomsOnFloor < minRooms || x == 0) {  
            floorWithMinRooms = x;
            minRooms = roomsOnFloor;
        }
        totalRooms += roomsOnFloor;
    }

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << setw(60) << right << "BlueMont Hotel located in " << location << endl; 
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << setw(59) << right << "Today's Room Rates(US$/night)" << endl;
    cout << setw(20) << right << "Single Room" << setw(20) << "Double Room" <<  setw(20) << "King Room" << setw(20) << "Suite Room" << endl; 
    cout << setw(20) << right << SINGLE_RATE << setw(20) << DOUBLE_RATE <<  setw(20) << KING_RATE << setw(20) << SUITE_RATE << endl; 
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    // calculate total occupancy and rate of Occupancy
    totalUnoccupiedRooms = totalRooms - totalOccupiedRooms;
    rateOfOccupancy = (static_cast<float>(totalOccupiedRooms) / totalRooms) * 100;

    cout << setw(40) << right << "Hotel Income: " << setw(20) << showpoint << fixed << setprecision(2) << hotelIncome << endl;
    cout << setw(40) << right << "Total # of Rooms: " << setw(20) << totalRooms << endl;
    cout << setw(40) << right << "Occupied Rooms: " << setw(20) << totalOccupiedRooms << endl;
    cout << setw(40) << right << "Unoccupied Rooms: " << setw(20) << totalUnoccupiedRooms << endl;
    cout << setw(40) << right << "Occupancy Rate " << setw(20) << rateOfOccupancy << "%" << endl;
    cout << "Floor #" << floorWithMinRooms << " with " << minRooms << " rooms is the floor with the least amount of rooms!" << endl;

    if (rateOfOccupancy < 60) {
        cout << "Your occupancy rate is less than 60%, improve your hotel!" << endl; 
    }

    // display project information
    cout << "PROGRAMMER: " << PROGGRAMMER_NAME << endl;
    cout << "CMSC140 Common Project " << ASSIGNMENT_NUMBER << endl;
    cout << "Due Date: " << DUE_DATE << endl;
    
    return 0;
}