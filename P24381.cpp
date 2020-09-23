#include <iostream>
using namespace std;

void cross(int n, char c) {
	for (int j = 0; j < n/2; ++j) {
		for (int k = 0; k < n/2; ++k) {
			cout << " ";
		}
		cout << c << endl;
	}
	for (int j = 0; j < n; ++j) {
		cout << c;
	}
	cout << endl;
	for (int j = 0; j < n/2; ++j) {
		for (int k = 0; k < n/2; ++k) {
			cout << " ";
		}
		cout << c << endl;
	}
}


int main() {
	int n;
	char c;
	cin >> n >> c;
	cross(n,c);
}

//g++ P24381.cpp -o P24381.exe && P24381.exe
