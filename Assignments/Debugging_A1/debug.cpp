#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	int times = i + 1;
	for (; i < 3; i++) {
		cout << "Display \"Hello World\" for the " << times << " times" << endl;
		times++;
	}	
	// because the calculation of times has been done before the loop
	cout << i << endl;
	return 0;
}