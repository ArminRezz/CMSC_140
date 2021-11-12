#include <iostream>
using namespace std;

int absval(int num) {
    return (num < 0) ? (num*=-1) : (num); 
}

int main()
{
    cout << absval(-2) << endl;
}