/*
* Class: CMSC 140 
* Instructor: Proffesor Shah
* Project/<4>
* Description: Store employee absences and give stats about employee absences 
* Due Date: 10/11/2021
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

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

// create global outfile
ofstream outFile; 

// gets num of employees in company from user, returns num of employees
int NumOfEmployees() {
    int numOfEmployees = 0; 
    bool invalid; 
    do {
        cout << "Enter number of employees in company: " << endl; 
        cin >> numOfEmployees; 
        invalid = numOfEmployees < 1; 

        if (invalid) 
            cout << "That number of employees is invalid! Please try again." << endl;
    } while(invalid);

    return numOfEmployees; 
}

// gets employee id num and total days absent for each employee, 
// writes info to outfile, returns total days missed 
int TotDaysAbsent(int numOfEmployees) {
    outFile.open("employeeAbsences.txt"); 
    outFile << left << setw(18) << "Employee ID" << left << setw(18) << "Days Absent" << endl;
    int totalDaysAbsent = 0;

    for (int i = 0; i < numOfEmployees; i++) {
        int id = 0;
        cout << "Enter employee id number: " << endl; 
        cin >> id; 

        int daysAbsent = 0; 
        bool invalid; 
        do {
            cout << "Enter number of absent days for this employee: " << endl; 
            cin >> daysAbsent; 
            bool invalid = daysAbsent < 0; 

            if (invalid) {
                cout << "Absent days cannot be negative! Please try again." << endl;
            }
            else {
                outFile << right << setw(8) << id << right << setw(16) << daysAbsent << endl;
                totalDaysAbsent += daysAbsent; 
            }
        } while(invalid);
    }
    outFile.close();

    return totalDaysAbsent;
}

// calculates average number of days missed for all employees
float AverageAbsent(int numOfEmployees, int totalDaysMissed) {
    return static_cast<float>(totalDaysMissed) / numOfEmployees; 
}

int main() {

    // declaring all proggram variables and constants
    const string PROGGRAMMER_NAME = "Armin Rezaiyan";
    const string DUE_DATE = "11/14/2021";

    int numOfEmployees = NumOfEmployees();
    int totalDaysAbsent = TotDaysAbsent(numOfEmployees);
    double averageAbsences = AverageAbsent(numOfEmployees, totalDaysAbsent);
    cout << "Programmer Name: Armin Reziayan" << endl;

    // write more information to outFile
    outFile.open("employeeAbsences.txt", ios::app); 
    outFile << "The " << numOfEmployees << " were absent a total of " << totalDaysAbsent << " days." << endl; 
    outFile << "The average number of days absent was " << showpoint << fixed << setprecision(1) << averageAbsences << " days." << endl; 
    outFile << "PROGRAMMER: " << PROGGRAMMER_NAME << endl;
    outFile << "Due Date: " << DUE_DATE << endl; 
    outFile.close();
    
    return 0;
}