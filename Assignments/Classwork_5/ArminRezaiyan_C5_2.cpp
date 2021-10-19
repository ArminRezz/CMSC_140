/*
* Class: CMSC 140 
* Instructor: Proffesor Shah
* Classwork/<5>
* Description: Print out some basic imformation about myself
* Due Date: 09/23/2021
* I pledge that I have completed the programming assignment independently. 
* I have not copied the code from a student or any source
* I have not given my code to any student
* Name: Armin Rezaiyan-Nojani
*
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // PART 2 --------------------------------------------

    string name, streetAddress, cityStateAddress, phoneNum; 

    cout << "Enter your name: " << endl;
    getline(cin, name); 
    cin.ignore();

    cout << "Enter your phone number: " << endl;
    getline(cin, phoneNum);
    cin.ignore();


    cout << "Enter your street address: " << endl;
    getline(cin, streetAddress);
    cin.ignore();

    cout << "Enter your city, state, and zipcode: " << endl;
    getline(cin, cityStateAddress);
    cin.ignore();

    // create and write to file
    ofstream myfile;
    myfile.open("list.txt");
    myfile << name << "\n" << phoneNum << "\n" << streetAddress << "\n" << cityStateAddress << endl;
    myfile.close();

    cout << "Here is all the information read from list.txt! \n" << endl; 

    // read and display
    string line;
    ifstream readfile("list.txt");
    if (readfile.is_open()) {

        getline(readfile, line); 
        cout << setw(18) << left << "Name: " << line << endl; 

        getline(readfile, line); 
        cout << setw(18) << left << "Phone number: " << line << endl; 

        getline(readfile, line); 
        cout << setw(18) << left << "Street address: " << line << endl;
        getline(readfile, line); 
        cout << setw(18) << right << " " << line << endl; 

        readfile.close();
    }

    return 0; 
}
