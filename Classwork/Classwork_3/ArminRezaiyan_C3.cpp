/*
* Class: CMSC 140 
* Instructor: Proffesor Shah
* Classwork/<2>
* Description: Print out some basic imformation about myself
* Due Date: 09/23/2021
* I pledge that I have completed the programming assignment independently. 
* I have not copied the code from a student or any source
* I have not given my code to any student
* Name: Armin Rezaiyan-Nojani
*
* Psuedocode:
*
* 1. Get student name
* 2. Get all 5 student scores
* 3. Calculate the total of all scores
* 4. Display message of average score (total diveded by 5)
*/

#include <iostream>
using namespace std;

int main() {
    int score; 
    double total;
    string studentName; 
    cout << "Enter the Student's name: \n";
    getline(cin, studentName);
    cout << "Enter  Syllabus Quiz Score ranging from 0 to 100: \n";
    cin >> score; 
    total += score;
    cout << "Enter  Chapter 1 Quiz ranging from 0 to 100: \n";
    cin >> score; 
    total += score;
    cout << "Enter Chapter 2 Quiz ranging from 0 to 100: \n";
    cin >> score; 
    total += score;
    cout << "Enter Programming Classwork1 ranging from 0 to 100: \n";
    cin >> score; 
    total += score;
    cout << "Enter Programming Classwork2 ranging from 0 to 100: \n";
    cin >> score; 
    total += score;
    cout << studentName << ": Final Score: " << total << " Average score: " << total / 5.0 << endl;

}
