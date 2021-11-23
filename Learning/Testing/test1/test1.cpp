#include <iostream>
using namespace std;

int absval(int num) {
    return (num < 0) ? (num*=-1) : (num); 
}

int main()
{
    for (int i = 1; i <= 38; i++) {
        cout << i <<". " << endl;
    }
    cout << absval(-2) << endl;
}