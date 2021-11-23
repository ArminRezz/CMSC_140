/*
* Class: CMSC 140 
* Instructor: Proffesor Shah
* Project/<4>
* Description: Store employee absences and give stats about employee absences 
* Due Date: 11/14/2021
* I pledge that I have completed the programming assignment independently. 
* I have not copied the code from a student or any source
* I have not given my code to any student
* Name: Armin Rezaiyan-Nojani 
*
* Psuedocode: 
* 1. Create a global variable of type ofstream for the output file employeeAbsences.txt
* 2. Create function NumOfEmployees (no parameters) 
        do 
            asks user for number of employees at company 
            if (num of employees is less than 1) 
                    print error message
        while (num of employees is less than 1)
        return number of employees (int value)
* 3. Create function TotDaysAbsent (takes in number of employees)
        for loop through number of employees in the company 
            ask user for employee number 
            do 
                ask user for number of days missed in year
                if (num of days is less than 0) 
                    print error message
            while(num of days missed is less than 0)
            write employee number and number of days missed to employeeAbsences.txt file
        return total number of days missed for all employees (int value)
* 4. Create function AverageAbsent (number of employees, total num of days absent for all employees)
        return total num of days absent / number of employees (double value)
* 5. Read in user full name
* 6. Create int value for num of employees, set equal to result of function NumOfEmployees
* 7. Call function TotDaysAbsent passing in number of employees
* 8. Create double average days absent 
     set equal to value of function AverageAbsent, pass in number of employees, total number of days absent
* 9. Write to employeeAbsences.txt, number of employees, number of absent days, and average num of absent days 
* 10. Write to employeeAbsences.txt full name of proggrammer, full name of user, due date
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
	
	/* Define a Lo Shu Magic Square using 3 parallel arrays corresponding         to each row of the grid */
	int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];
        // Your code goes here

    fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, 3); 
    showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, 3);

	return 0;
}
// Function definitions go here

bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {
    return true; 
}

bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max) {
    bool rangeGood = true; 
    for (int i = 0; i < size; i++) {
        if (arrayRow1[i] < min || arrayRow1[i] > max) {
            rangeGood = false;
        }
    }
    for (int i = 0; i < size; i++) {
        if (arrayRow2[i] < min || arrayRow2[i] > max) {
            rangeGood = false;
        }
    }
    for (int i = 0; i < size; i++) {
        if (arrayRow3[i] < min || arrayRow3[i] > max) {
            rangeGood = false;
        }
    }
    return rangeGood; 
}

bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {
    bool valid = true; 
    for (int i = 0; i < size; i++) {
        for (int x = 0; x < size x++) {
            if (arrayRow1[i] == arrayRow2[x]) {
                valid = false;
                x = size; 
                i = size; 
            }
        }
        for (int x = 0; x < size x++) {
            if (arrayRow1[i] == arrayRow3[x]) {
                valid = false;
                x = size; 
                i = size; 
            }
        }
    }
    return true; 
}

bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size) {
    int rowTotal1, rowTotal2, rowTotal3; 
    for (int i = 0; i < size; i++) {
        rowTotal1 += arrayrow1[i];
    }
    for (int i = 0; i < size; i++) {
        rowTotal2 += arrayrow2[i];
    }
    for (int i = 0; i < size; i++) {
        rowTotal3 += arrayrow3[i];
    }
    return rowTotal1 == rowTotal2 == rowTotal3;
}

bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size) {
    int colTotals[3]; 
    for (int i = 0; i < size; i++) {
        colTotal[i] = arrayrow1[0] + arrayrow2[0] + arrayrow3[0];
    }
    return colTotals[0] == colTotals[1] == colTotals[2]; 
}

bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size) {
    int diag1 = arrayrow1[0] + arrayrow2[1] + arrayrow3[2];
    int diag2 = arrayrow1[2] + arrayrow2[1] + arrayrow3[3];
    return diag1 == diag2; 
}

void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {
    cout << "Enter numbers for your magic square: " << endl;
    cin >> arrayRow1[0] >> arrayRow1[1] >> arrayRow1[2]; 
    cin >> arrayRow2[0] >> arrayRow2[1] >> arrayRow2[2]; 
    cin >> arrayRow3[0] >> arrayRow3[1] >> arrayRow3[2];
}

void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size) {
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
    cout << endl; 
}
