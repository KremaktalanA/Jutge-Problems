#include <iostream>
using namespace std;

int main() {
	int a, m = 0 ,d = 0;
	while (cin >> a) {
		int k = a / 100;
		int x = a % 19;
		int b = a % 4;
		int c = a % 7;
		int q = k / 4;
		int p = (13 + 8*k) /25;
		int y = (15 - p + k - q) % 30;
		int z = (19*x + y) % 30;
		int n = (4 + k - q) % 7;
		int e = (2*b + 4*c + 6*z + n) % 7;
		if (z + e <= 9) {
			d = 22 + z + e;
			m = 3;
		}
		else if (z == 29 and e == 6) {
			d = 19;
			m = 4;
		}
		else if (z == 28 and e == 6 and x > 10) {
			d = 18;
			m = 4;
		}
		else {
			d = z + e - 9;
			m = 4;
		}
		cout << d << "/" << m << endl;
	}
}

//g++ P35547.cpp -o P35547.exe && P35547.exes