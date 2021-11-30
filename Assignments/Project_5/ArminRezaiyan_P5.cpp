/*
* Class: CMSC 140 
* Instructor: Proffesor Shah
* Project/<5>
* Description: Allows user to make square, determines if its magic square or not
* Due Date: 11/14/2021
* I pledge that I have completed the programming assignment independently. 
* I have not copied the code from a student or any source
* I have not given my code to any student
* Name: Armin Rezaiyan-Nojani 
*
* Psuedocode: 
* 1. Create function isMagicSquare with parametersint arr1[], int arr2[], int arr3[], int size)
    - create array of booleans with size 5
    - fill array with return values from checkRange, checkUnique, checkRowSum, checkColSum, checkDiagSum functions
    - return true if all elements in array are true, if not, return false
* 2. Create function checkRange with parameters(int arr1[], int arrayRow2[], int arrayRow3[], int size, int min, int max)
    - for through size --> 
         if value of arr1, arr2, or arr3 is less than min or greater than max return false
* 3. Create function checkUnique with parameters(int arr1[], int arr2[], int arr3[], int size)
    - if numbers in each row are equal
        for through size
            for through each row and compare with other rows
                if any numbers are equal, return false
        return true
* 4. Create function checkRowSum with parameters(int arr1[], int arr2[], int arr3[], int size)
        create arr of size 3 and initialize with values of 0
        for through size
            add value of arr1 at index to arr
            add value of arr2 at index to arr
            add value of arr3 at index to arr
        }
    return true if all elements in initial array are the same;
* 5. Create function checkColSum with parameters(int arr1[], int arr2[], int arr3[], int size)
        create arr to hold totals of each column
        for through size
            add column totals to each index in array of totals
        }
    return true, if all column totals are equal, false if not
* 6. Create function checkDiagSum with parameters(int arr1[], int arr2[], int arr3[], int size)
        diag1 = total of nums from top left to bottom right
        diag2 = total of nums from bottom left to top right
        return true if diag1 is equal to diag2, false if not; 
* 7. Create function fillArray with parameters(int arr1[], int arr2[], int arr3[], int size)
        Take in 9 numbers from user input, fill in arr1, 2 and 3 from left to right, top to bottom
* 8. Create function showArray with parameters(int arr1[], int arr2[], int arr3[], int size)
        for through size 
            print row 1
        for through size
            print row 2
        for through size
            print row 3
* 9. In Main, call fillArray, and showArray
* 10. If isMagicSquare() is true print "you now have magic square", else, "This is not magic square"
*/

#include<iostream>
using namespace std;

// Global constants 
const int ROWS = 3;  // The number of rows in the array
const int COLS = 3;  // The number of columns in the array
const int MIN = 1;  // The value of the smallest number
const int MAX = 9;  // The value of the largest number

// Function prototypes
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);

int main()
{
	
	/* Define a Lo Shu Magic Square using 3 parallel arrays corresponding to each row of the grid */
	int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];

    // Your code goes here
    fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, 3); 
    showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, 3);
    
    if (isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, 3)) {
        cout << "You now have a magic square!" << endl;
    } else {
        cout << "This is not a magic square!" << endl; 
    }
    
	return 0;
}
// Function definitions go here

bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {
    bool conditions[5];
    conditions[0] = checkRange(arrayRow1, arrayRow2, arrayRow3, size, MIN, MAX); 
    conditions[1] = checkUnique(arrayRow1, arrayRow2, arrayRow3, size); 
    conditions[2] = checkRowSum(arrayRow1, arrayRow2, arrayRow3, size); 
    conditions[3] = checkColSum(arrayRow1, arrayRow2, arrayRow3, size); 
    conditions[4] = checkDiagSum(arrayRow1, arrayRow2, arrayRow3, size);

    for (int i = 0; i < 5; i++) {
        if (conditions[i] == 0) {
            return 0;
        }
    }
    return 1; 
}

bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        if (arrayRow1[i] < min || arrayRow1[i] > max) {
            return 0; 
        }
        if (arrayRow2[i] < min || arrayRow2[i] > max) {
            return 0; 
        }
        if (arrayRow3[i] < min || arrayRow3[i] > max) {
            return 0; 
        }
    }
    return 1; 
}

bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {
    // check if any numbners in row are equal 
    bool row1 = arrayRow1[0] == arrayRow1[1] || arrayRow1[0] == arrayRow1[2] || arrayRow1[1] == arrayRow1[2]; 
    bool row2 = arrayRow2[0] == arrayRow2[1] || arrayRow2[0] == arrayRow2[2] || arrayRow2[1] == arrayRow2[2];
    bool row3 = arrayRow3[0] == arrayRow3[1] || arrayRow3[0] == arrayRow3[2] || arrayRow3[1] == arrayRow3[2];

    // check if any numbers in other rows are equal
    if (row1 == 0 || row2 == 0 || row3 == 0) {
        for (int i = 0; i < size; i++) {
            for (int x = 0; x < size; x++){
                if(arrayRow1[i] == arrayRow2[x] || arrayRow1[i] == arrayRow3[x] || arrayRow2[i] == arrayRow3[x]) {
                    return 0;
                }
            }   
        }
    } 
    return 1; 
}

bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size) {
    int rowTot[3] = {0, 0, 0}; 
    for (int i = 0; i < size; i++) {
        rowTot[0] += arrayrow1[i];
        rowTot[1] += arrayrow2[i];
        rowTot[2] += arrayrow3[i];
    }
    return rowTot[0] == rowTot[1] && rowTot[0] == rowTot[2] && rowTot[1] == rowTot[2];
}

bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size) {
    int colTot[3]; 
    for (int i = 0; i < size; i++) {
        colTot[i] = arrayrow1[i] + arrayrow2[i] + arrayrow3[i];
    }
    return colTot[0] == colTot[1] && colTot[0] == colTot[2] && colTot[1] == colTot[2]; 
}

bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size) {
    int diag1 = arrayrow1[0] + arrayrow2[1] + arrayrow3[2];
    int diag2 = arrayrow1[2] + arrayrow2[1] + arrayrow3[0];
    return diag1 == diag2; 
}

void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {
    cout << "Enter numbers for your magic square: " << endl;
    cin >> arrayRow1[0] >> arrayRow1[1] >> arrayRow1[2]; 
    cin >> arrayRow2[0] >> arrayRow2[1] >> arrayRow2[2]; 
    cin >> arrayRow3[0] >> arrayRow3[1] >> arrayRow3[2];
}

void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size) {
    cout << "------" << endl; 
    for (int i = 0; i < size; i++) {
        cout << arrayrow1[i] << " ";
    }
    cout << endl; 
    for (int i = 0; i < size; i++) {
        cout << arrayrow2[i] << " ";
    }
    cout << endl; 
    for (int i = 0; i < size; i++) {
        cout << arrayrow3[i] << " ";
    }
    cout << "\n------" << endl;  
}
