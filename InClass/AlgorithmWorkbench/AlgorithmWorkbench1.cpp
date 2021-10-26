#include <iostream>
using namespace std;

int main() {

    int num = 0; 
    while (num < 100) {
        cout << "Enter number: " << endl;
        cin >> num;
        num *= 10; 
    }

    int num1 = 0; 
    int num2 = 0;
    int yesOrNo = 0;
    do {
        cout << "Enter 2 numbers: " << endl; 
        cin >> num1; 
        cin >> num2;
        cout << "Sum is: " << num1 + num2 << endl; 
        cout << "Do you want to go again (0 for no, 1 for yes): " << endl;
        cin >> yesOrNo; 
    } while (yesOrNo == 1);
 
    return 0;
}