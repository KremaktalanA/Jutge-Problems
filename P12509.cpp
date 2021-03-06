#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 0 or n == 1) return 1;
	return n * factorial(n-1);
}

int main() {
	int n;
	while (cin >> n) {
		cout << factorial(n) << endl;
	}
}

//g++ P12509.cpp -o P12509.exe && P12509.exe