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
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

float showMenu() {
    cout << "Show menu: " << endl; 
    cout << "1. Coke    $1.25" << endl; 
    cout << "2. Pepsi   $1.00" << endl; 
    cout << "3. Water   $2.00" << endl; 
    cout << "4. Coffee  $1.50" << endl; 
    cout << "5. Exit Menu" << endl; 

    int choice = 0;
    cout << "Enter your choice: " << endl; 
    cin >> choice;
    switch (choice) {
        case 1: return 1.25;
        case 2: return 1.00; 
        case 3: return 2.00;
        case 4: return 1.50;
        case 5: {
            exit(1);
        }
    }
    return 0;
}

float takePurchase(float price) {
    cout << "How many do you want?: " << endl; 
    int quantity = 0;
    cin >> quantity; 
    return quantity * price; 
}

float takePayment() {
    cout << "How much is your payment: " << endl;
    double payment = 0.0;
    cin >> payment;
    return payment;
}

void displayInfo(float purchase, float payment) {
    float tax = purchase * 0.06; 
    cout << "Tax Amount: " << purchase * 0.06 << endl; 
    cout << "Total purchase: " << purchase + tax << endl;
    cout << "Change: " << payment - (purchase + tax) << endl;
}

int main() {

    int price = showMenu(); 
    float purchase = takePurchase(price);
    float payment = takePayment();
    displayInfo(purchase, payment);

    return 0; 
}
