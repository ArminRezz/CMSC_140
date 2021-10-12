/*
* Class: CMSC 140 
* Instructor: Proffesor Shah
* Classwork/<4>
* Description: Print out some basic imformation about myself
* Due Date: 09/23/2021
* I pledge that I have completed the programming assignment independently. 
* I have not copied the code from a student or any source
* I have not given my code to any student
* Name: Armin Rezaiyan-Nojani
*
* Psuedocode:
** PROGRAM 1
* Ask user how many tickets sold
* find subtotal
* if 0 - 3 print subtotal
* if 3 - 4 print subtotal x 0.9
* if 5 - 6 print subtotal x 0.75
* if 7 - 9 print subtotal x 0.66
* if 10+ print subtotal x 0.58
* else - print user needs more tickets sold
*
** PROGRAM 2
* Ask user how many colors, if lighted, if needs removal
* create price variable float
* if color is 1 price 250
* if color is 2 price 325
* if color is 3 price 450
* if color is 4 price 625
* if color is 5+ price 850
* if lighted price raises 25%
* if needs removing price raises 10%
* print final price
*/

#include <iostream>
using namespace std;

int main() {


    // program 1

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
    
    // program 2

    int numOfColors = 0;
    cout << "Enter num of colors in sign? : ";
    cin >> numOfColors; 

    char lighted; 
    cout << "Do you want lighted sign? (y/n): ";
    cin >> lighted;

    char removed; 
    cout << "Do you want old sign removed? (y/n): ";
    cin >> removed;

    float price = 0;

    switch (choice) {
        case 1: 
            price = 250;
            break;
        case 2:
            price = 325;
            break;
        case 3:
            price = 450;
            break;
        case 4:
            price = 625;
            break;
        default:
            price = 850;
    }

    if (lighted == 'y') {
        price *= 1.25; 
    } 

    if (removed == 'y') {
        price *= 1.1; 
    } 

    cout << "The price is " << price; 


}
