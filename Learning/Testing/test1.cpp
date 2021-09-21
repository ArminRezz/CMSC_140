#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter your grade: ";
    char grade; 
    cin.get(grade); 
    cin.ignore();
    cout << "Your grade is: " << grade << endl;

    cout << "Please enter your full name: " << endl;
    string fullName;
    getline(cin, fullName);
    // cin.ignore();
    cout << "Your name is " << fullName << endl;
    return 0;
}