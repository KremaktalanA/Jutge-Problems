#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

bool is_balanced(int n) {
	int odd = 0;
	int even = 0;
	int ni = 0;
	int m = n;
	int c = 1;
	while (m > 0) {
		ni = m % 10;
		m = m / 10;
		if (c % 2 == 0) even += ni;
		else odd += ni;
		c++;
	}
	if (odd == even) return true;
	else return false;
}



int main() {
	int n;
	while (cin >> n) {
		if (is_balanced(n)) cout << "1" << endl;
		else cout << "0" << endl;
	}

}

//g++ P26492.cpp && a.exe