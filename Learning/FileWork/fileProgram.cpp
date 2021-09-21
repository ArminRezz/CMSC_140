// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
    // create and write to file
    ofstream myfile;
    myfile.open("example.txt");
    myfile << "Writing this to a file.\n";
    myfile.close();

    // add on to the end of file 
    myfile.open("example.txt", ios::app);
    myfile << "Adding random shit.\n";
    myfile.close();
    return 0;
}