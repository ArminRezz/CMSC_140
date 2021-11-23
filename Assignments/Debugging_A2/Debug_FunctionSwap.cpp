#include <iostream>
using namespace std;

// function prototypes
void swap(int& x, int& y);

int main() {
    // local variable declaration:
    int a = 100, b = 200;

    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl << endl;

    // call function swap to swap the values using variable reference.
    swap(a, b);

    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl << endl;

    return 0;
}

// function definition
void swap(int& x, int& y) {
    int temp;
    temp = x; /* Assign the value of x to temp */
    x = y;    /* Assign the value of y to x */
    y = temp; /* Assign the value of temp to y */
}