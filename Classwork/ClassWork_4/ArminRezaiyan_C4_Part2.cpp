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

    const int TICKET_PRICE = 109; 
    int ticketsSold = 0;

    cout << "How many tickets were sold? : ";
    cin >> ticketsSold; 
    int subtotal = ticketsSold * TICKET_PRICE;  

    if (ticketsSold > 0 && ticketsSold < 3) {
        cout << "The total cost of purchase is $" << subtotal << endl; 
    }
    else if (ticketsSold == 3 || ticketsSold == 4) {
        cout << "The total cost of purchase is $" << subtotal * 0.9 << endl; 
    }
    else if (ticketsSold == 5 || ticketsSold == 6) {
        cout << "The total cost of purchase is $" << subtotal * 0.75 << endl; 
    }
    else if (ticketsSold >= 7 || ticketsSold <= 9) {
        cout << "The total cost of purchase is $" << subtotal * 0.66 << endl; 
    }
    else if (ticketsSold >= 10) {
        cout << "The total cost of purchase is $" << subtotal * 0.58 << endl; 
    }
    else {
        cout << "You must purchase more tickets!"; 
    }

}
