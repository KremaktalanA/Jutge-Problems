#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int x;
	cout. setf(ios::fixed);
	cout. precision(6);

	while (cin >> x) {
		cout << sin(x) << " " << cos(x) << endl; 
	}
}

//g++ P37760.cpp -o P37760.exe && P37760.exe