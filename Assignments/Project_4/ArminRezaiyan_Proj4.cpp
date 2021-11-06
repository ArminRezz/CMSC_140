/*
* Class: CMSC 140 
* Instructor: Proffesor Shah
* Project/<2>
* Description: Express given age in many different units and demonstrate the operators in c++
* Due Date: 10/11/2021
* I pledge that I have completed the programming assignment independently. 
* I have not copied the code from a student or any source
* I have not given my code to any student
* Name: Armin Rezaiyan-Nojani 
*
* Psuedocode: 
* 1. Create function NumOfEmployees (no parameters) 
        do 
            asks user for number of employees at company 
            if (num of employees is less than 1) 
                    print error message
        while (num of employees is less than 1)
        return number of employees (int value)
* 2. Create function TotDaysAbsent (takes in number of employees)
        for loop throuhg number of employees in the company 
            ask user for employee number 
            do 
                ask user for number of days missed in year
                if (num of days is less than 0) 
                    print error message
            while(num of days missed is less than 0)
            write employee number and number of days missed to employeeAbsences.txt file
        return total number of days missed for all employees (int value)
* 3. Create function AverageAbsent (number of employees, total num of days absent for all employees)
        return total num of days absent / number of employees (double value)
* 4. Read in user full name
* 5. Create int value for num of employees, set equal to result of function NumOfEmployees
* 6. Call function TotDaysAbsent passing in number of employees
* 7. Create double average days absent 
     set equal to value of function AverageAbsent, pass in number of employees, total number of days absent
* 8. Write to employeeAbsences.txt, number of employees, number of absent days, and average num of absent days 
* 9. Write to employeeAbsences.txt full name of proggrammer, full name of user, due date
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    // declaring all proggram variables and constants
    const string PROGGRAMMER_NAME = "Armin Rezaiyan";
    const int ASSIGNMENT_NUMBER = 3; 
    const string DUE_DATE = "10/29/2021";

    // display project information
    cout << "PROGRAMMER: " << PROGGRAMMER_NAME << endl;
    cout << "CMSC140 Common Project " << ASSIGNMENT_NUMBER << endl;
    cout << "Due Date: " << DUE_DATE << endl;
    
    return 0;
}