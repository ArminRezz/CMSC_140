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

*/

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h> 
using namespace std;

int main() {


    const string PROGGRAMMER_NAME = "Armin Rezaiyan";
    const int ASSIGNMENT_NUMBER = 2; 
    const string DUE_DATE = "09/09/2021";
    string countryName; 

    cout << "Enter a country name: ";
    getline(cin, countryName); 

    cout << "Converter Toolkit\n------------------" << endl; 
    cout << "1. Temperature Converter\n2. Distance Converter\n3. Weight Converter\n4. Quit" << endl; 

    
    int choice = 0;
    cout << "Enter your choice (1-4): " << endl; 
    cin >> choice; 

    switch (choice) {
        case 1: {
            int celsius = 0;
            cout << "Please enter temperature in Celsius (such as 24): ";
            cin >> celsius; 

            float farenheit = (9.0/5) * celsius + 32; 
            cout << "It is " << static_cast<int>(farenheit) << " in farenheit." << endl;

            break;
        }
        case 2: {
            float kilometers = 0.0; 
            cout << "Please enter distance in kilometer (such as 18.4): ";
            cin >> kilometers; 

            if (kilometers < 0) {
                cout << "!!! program does not convert negative distance !!!" << endl; 
            } else {
                cout << "Distance in miles is " << fixed << setprecision(2) << kilometers * 0.6 << endl; 
            }

            break;
        }
        case 3: {
            float kilograms = 0.0; 
            cout << "Please enter weight in kilograms: ";
            cin >> kilograms; 
            cout << "Weight in pounds is " << fixed << setprecision(1) << kilograms * 2.2 << "." << endl; 
            break;
        }
        case 4: {
            return 0; 
            break;
        }
        default: {
            cout << "Enter valid input!!!" << endl;
        }
    }

    cout << countryName << " sounds fun!\n" << endl;

    // display project information
    cout << "PROGRAMMER: " << PROGGRAMMER_NAME << endl;
    cout << "CMSC140 Common Project " << ASSIGNMENT_NUMBER << endl;
    cout << "Due Date: " << DUE_DATE << endl;

    return 0;
}