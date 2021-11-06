/*
* Class: CMSC 140 
* Instructor: Proffesor Shah
* Classwork/<6>
* Description: addition and subtration of 2 user inputted numbers 
* Due Date: 09/23/2021
* I pledge that I have completed the programming assignment independently. 
* I have not copied the code from a student or any source
* I have not given my code to any student
* Name: Armin Rezaiyan-Nojani
*/

#include <iostream>
#include <fstream>
using namespace std;

int getChoice() {
    cout << "Enter 1 for addition, 2 for subtraction: " << endl;
    int choice = 0;
    cin >> choice; 
    return choice;
}

void getNums(int &n1, int &n2) {
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter first number: ";
    cin >> n2;
}

int addition(int x, int y) {
    return x + y;
}

int subtraction(int x, int y) {
    return x - y;
}

int main() {

    int num1 = 0;
    int num2 = 0;

    int choice = getChoice(); 
    getNums(num1, num2);

    if (choice == 1) {
        cout << "Sum is: " << addition(num1, num2) << endl;
    }

    if (choice == 2) {
        cout << "Difference is: " << subtraction(num1, num2) << endl;
    }

    return 0; 
}
