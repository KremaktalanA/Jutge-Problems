#include <iostream>
using namespace std;

int factorial(int n) {
	int a = 1;
	for (int i = 1; i <= n; ++i) {
		a *= i;
	}
	return a;
}

int main() {
	int x;
	cin >> x;
	cout << factorial(x) << endl;
}

//g++ P57474.cpp -o P57474.exe && P57474.exe