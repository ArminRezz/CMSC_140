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
using namespace std;

int main() {

    // PART 1 --------------------------------------------
    for (int i = 0; i < 10; i++) {
        cout << "*";
    }
    cout << endl; 

    for (int i = 0; i < 20; i++) {
        cout << "*"; 
    }
    cout << endl; 

    for (int i = 1; i <= 10; i++) {
        for (int x = 0; x < i; x++) {
            cout << "*";
        }
        cout << endl; 
    }
    cout << endl; 

    for (int i = 1; i <= 20; i++) {
        for (int x = 0; x < i; x++) {
            cout << "*";
        }
        cout << endl; 
    } 
    cout << endl; 

    for (int i = 10; i > 0; i--) {
        for (int x = 0; x < i; x++) {
            cout << "*";
        }
        cout << endl; 
    }
    cout << endl; 

    for (int i = 20; i > 0; i--) {
        for (int x = 0; x < i; x++) {
            cout << "*";
        }
        cout << endl; 
    }
    cout << endl; 

    return 0; 
}
