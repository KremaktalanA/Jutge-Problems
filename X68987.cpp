#include <iostream>
using namespace std;

int main() {
	double x;
	int nop = 0;
	while (cin >> x) {
		if (x < 5) {
			nop++;
		}
	}
	cout << nop << endl;
}

//g++ X68987.cpp -o X68987.exe && X68987.exe