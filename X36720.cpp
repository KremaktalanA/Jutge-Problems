#include <iostream>
#include <vector>
using namespace std;

int main() {
	double x = 0, sum = 0;
	while (cin >> x) {
    	sum += x*1.6;
	}
	if (sum >= 622) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}	

//g++ X36720.cpp -o X36720.exe && X36720.exe