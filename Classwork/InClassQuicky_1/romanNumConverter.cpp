#include <iostream>
#include <string>
#include <iomanip>
#include <math.h> 
using namespace std;

int main() {

    int num = 0; 
    cout << "Enter number 1-10: " << endl; 
    cin >> num;

    switch (num) {
        case 1: {
            cout << "Your num in roman numerals is: I " << endl; 
            break;
        }
        case 2: {
            cout << "Your num in roman numerals is: II " << endl; 
            break;
        }
        case 3: {
            cout << "Your num in roman numerals is: III " << endl; 
            break;
        }
        case 4: {
            cout << "Your num in roman numerals is: IV " << endl; 
            break;
        }
        case 5: {
            cout << "Your num in roman numerals is: V " << endl; 
            break;
        }
        case 6: {
            cout << "Your num in roman numerals is: VI " << endl; 
            break;
        }
        case 7: {
            cout << "Your num in roman numerals is: VII " << endl; 
            break;
        }
        case 8: {
            cout << "Your num in roman numerals is: VIII " << endl; 
            break;
        }
        case 9: {
            cout << "Your num in roman numerals is: IX " << endl; 
            break;
        }
        case 10: {
            cout << "Your num in roman numerals is: X " << endl; 
            break;
        }
        default: {
            cout << "We dont handle that!!!" << endl;
        }
    }

    return 0;
}