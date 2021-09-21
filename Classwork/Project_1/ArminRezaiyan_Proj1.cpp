/*
* Class: CMSC 140 
* Instructor: Proffesor Shah
* Project/<1>
* Description: Express given age in many different units and demonstrate the operators in c++
* Due Date: 09/06/2021
* I pledge that I have completed the programming assignment independently. 
* I have not copied the code from a student or any source
* I have not given my code to any student
* Name: Armin Rezaiyan-Nojani
*
* Psuedocode:
1. declare constants for proggrammer name, assignment number, 
due date, dog year, days per month, and gold fish year
2. Display welcome message to user
3. Ask user for name 
4. Greet user with their name
5. Get user age
6. Declare hours variable to age * 12 * DAYS_PER_MONTH * 24
7. Calculate the age in years, months (age * 12), days (hours / 24), 
hours, minutes (hours * 60), seconds (hours * 60^2), dog (age * dog year constant), 
goldfish (age * gold fish constant)
8. Display proper numbers for all units of age
9. Get 2 integer numbers from user 
10. Calculate numbers added, subtracted, integer divided, and float divided
11. Display all equations with their answers
12. Display Project Info 
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h> 
using namespace std;

int main() {

    // constants
    const string PROGGRAMMER_NAME = "Armin Rezaiyan";
    const int ASSIGNMENT_NUMBER = 1; 
    const string DUE_DATE = "09/09/2021";
    const int ONE_DOG_YEAR = 7; 
    const int DAYS_PER_MONTH = 30;
    const int GOLD_FISH_YEAR = 5;

    // basic info variables
    string robotName = "Neo"; 
    string visitorName;
    int age; 

    // giving introduction and addressing user, and getting users name and age
    cout << "************** ROBOT PROTOTYPE SCRIPTING" << endl;
    cout << "Hello, welcome to Montgomery College. My name is " << robotName << ", may I have your name?" << endl;
    getline(cin, visitorName); 
    cout << "Nice to have you with us today " << visitorName << "!\n";
    cout << "Let me impress you with a small game.\n";
    cout << "Give me the age of an important person or a pet to you.\n";
    cout << "Please give me only a number:";
    cin >> age;

    // make hours variable based on users age
    int hours = age * 12 * DAYS_PER_MONTH * 24;

    // display age with all different units 
    cout << "You have entered " << age << endl; 
    cout << "If this is for a person, the age can be expressed as: " << endl;
    cout << age << " years\n";
    cout << "or " << age * 12 << " months\n";  
    cout << "or about " << hours / 24 << " days\n";
    cout << "or about " << hours << " hours\n";
    cout << "or about " << hours * 60 << " minutes\n"; 
    cout << "or about " << hours * 60 * 60 << " seconds.\n";
    cout << "If this is for a dog, it is " << age * ONE_DOG_YEAR << " years old in human age.\n";
    cout << "If this is for a gold fish, it is " << age * GOLD_FISH_YEAR << " years old in human age.\n";

    // declare int variable for 2 numbers
    int num1, num2; 

    // get num1 and num2 from user 
    cout << "Let's play another game, " << visitorName << " Give me a whole number.\n";
    cin >> num1;
    cout << "Very well. Give me another whole number.\n";
    cin >> num2; 

    // calculate the answer for each operation
    int addition = num1 + num2; 
    int division = num1 / num2; 
    float doubleDivision = static_cast<float>(num1) / num2; 

    // display equation and the corresponding answer for each
    cout << "Using the operator '+' in C++, the result of " << num1 << " + " << num2 << " is " << addition << endl; 
    cout << "Using the operator '/', the result of " << num1 << " / " << num2 << " is " << division << endl;
    cout << "However, the result of " << showpoint << fixed << setprecision(1) << static_cast<float>(num1) << " / " << static_cast<float>(num2);
    cout << " is about " << doubleDivision << endl;
    cout << "Thank you for testing my program!!" << endl;

    // display project information
    cout << "PROGRAMMER: " << PROGGRAMMER_NAME << endl;
    cout << "CMSC140 Common Project " << ASSIGNMENT_NUMBER << endl;
    cout << "Due Date: " << DUE_DATE << endl;

    return 0;
}