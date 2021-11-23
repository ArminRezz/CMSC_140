/*
* Class: CMSC 140 
* Instructor: Proffesor Shah
* Classwork/<6>
* Description: print numbers that are greater than number inputted by user
* Due Date: 09/23/2021
* I pledge that I have completed the programming assignment independently. 
* I have not copied the code from a student or any source
* I have not given my code to any student
* Name: Armin Rezaiyan-Nojani
*/

#include <iostream>
using namespace std;

void largerThanN (int arr[], int size, int n) {
    for (int i = 0; i < size; i++) {
        if (n < arr[i]) {
            cout << arr[i] << " "; 
        }
    }
}

 
int main() {

    int numbers[10] = {30,20,50,2,-1,44,3,12,90,32};

    cout << "Enter a number please: " << endl;
    int num = 0; 
    cin >> num;

    largerThanN(numbers, 10, num); 
    cout << endl; 

    return 0; 
}
