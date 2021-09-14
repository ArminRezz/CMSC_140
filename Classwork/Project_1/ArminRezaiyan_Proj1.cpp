/*
* Class: CMSC 140 
* Instructor: Proffesor Shah
* Project/<2>
* Description: Greeting script for robot
* Due Date: 09/06/2021
* I pledge that I have completed the programming assignment independently. 
* I have not copied the code from a student or any source
* I have not given my code to any student
* Name: Armin Rezaiyan-Nojani
*
* Psuedocode:
*
* 1. Display name, address, number, and major
*/

#include <iostream>
using namespace std;

int main() {
    const string robotName = "Neo"; 
    const string DUE_DATE = "09/09/21";
    const int ONE_DOG_YEAR = 7; 
    const int DAYS_PER_MONTH = 30;
    const int GOLD_FISH_YEAR = 5;
    const int ASSIGNMENT_NUMBER = 1; 
    string visitorName;
    int age; 

    cout << "************** ROBOT PROTOTYPE SCRIPTING" << endl;
    cout << "Hello, welcome to Montgomery College. My name is " << robotName << ", may I have your name?" << endl;
    getline(cin, visitorName); 
    cout << "Nice to have you with us today " << visitorName << "!\n";
    cout << "Let me impress you with a small game.\n";
    cout << "Give me the age of an important person or a pet to you.\n";
    cout << "Please give me only a number:";
    cin >> age;

    int hours = age * 365 * 24;

    cout << "You have entered " << age << endl; 
    cout << "If this is for a person, the age can be expressed as: " << endl;
    cout << "2 years\n";
    cout << "or " << age * 12 << " months\n";  
    cout << "or about " << age * 365 << " days\n";
    cout << "or about " << hours << " hours\n";
    cout << "or about " << hours * 60 << " minutes\n"; 
    cout << "or about " << hours * 60 * 60 << " seconds.\n";
    cout << "If this is for a dog, it is " << age * ONE_DOG_YEAR << " years old in human age.\n";
    cout << "If this is for a gold fish, it is " << age * GOLD_FISH_YEAR << " years old in human age.\n";

    int randomNum1, randomNum2; 
    cout << "Let's play another game, " << visitorName << " Give me a whole number.";
    cin >> randomNum1;
    cout << "Very well. Give me another whole number.";
    cin >> randomNum2; 

    int addition = randomNum1 + randomNum2; 
    int division = randomNum1 / randomNum2; 
    float doubleDivision = (float)randomNum1 / randomNum2; 

    cout << "Using the operator '+' in C++, the result of " << randomNum1 << " + " << randomNum2 << " is " << addition << endl; 
    cout << "Using the operator '/', the result of " << randomNum1 << " / " << randomNum2 << " is " << division << endl; 
    cout << "However, the result of " << randomNum1 << ".0 / " << randomNum2 << ".0 is about " << doubleDivision << endl; 
    cout << "Thank you for testing my program!!" << endl;
    return 0;
}