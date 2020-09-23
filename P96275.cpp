#include <iostream>
#include <math.h>
using namespace std;

int absolute(int n) {
	n = abs(n);
	return n;
}
int main() {
	int x;
	cin >> x;
	cout << absolute(x);
}

//g++ P96275.cpp -o P96275.exe && P96275.exe