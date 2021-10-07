#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 25; i++) {
        cout << i << " ";
    }
    cout << endl; 

    string randomNums[5]; 

    int x = 0; 
    while(x < 5) {
        randomNums[x] = x;
        x++;
    }

    cout << randomNums;


}