/*
* Class: CMSC 140 
* Instructor: Proffesor Shah
* Classwork/<8>
* Description: Array Practice
* Due Date: 09/23/2021
* I pledge that I have completed the programming assignment independently. 
* I have not copied the code from a student or any source
* I have not given my code to any student
* Name: Armin Rezaiyan-Nojani
*/

#include <iostream>
using namespace std;

void displayArray(int array[], int size);
void selectionSort(int array[], int size);
int findMax(int array[], int size);
int findMin(int array[], int size);
double findAvg(int array[], int size);

 
int main() {

    cout << "How many scores do you want to enter: " << endl;
    int size = 0;
    cin >> size;

    int scores[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter score #" << i+1 << ": " << endl;
        cin >> scores[i];
    }
    cout << "Original Scores Order: "; 
    displayArray(scores, size);

    cout << "After selection sort: "; 
    selectionSort(scores, size); 
    displayArray(scores, size);

    cout << "\nMax: " << findMax(scores, size) << ", Min: " << findMin(scores, size) << endl;
    cout << "Average: " << findAvg(scores, size) << endl;

    return 0; 
}

void displayArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void selectionSort(int array[], int size) {
    int maxIndex;
    for (int i = 0; i < size-1; i++) {
        maxIndex = i; 

        // find max index
        for (int x = maxIndex; x < size; x++) {
            if (array[x] > array[maxIndex]) {
                maxIndex = x;
            }
        }

        // swap the values
        if (maxIndex != i) {
            int temp = array[i];
            array[i] = array[maxIndex];
            array[maxIndex] = temp;
        }
    }
}

int findMax(int array[], int size) {
    int maxIndex = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }
    return array[maxIndex];
}

int findMin(int array[], int size) {
    int minIndex = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] < array[minIndex]) {
            minIndex = i;
        }
    }
    return array[minIndex];
}

double findAvg(int array[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    return static_cast<double>(total) / size;
}
