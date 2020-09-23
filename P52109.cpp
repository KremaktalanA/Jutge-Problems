#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
	int x;
	int r = 0;
	while (cin >> x) {
		r = x*3+1;
		while (r % 2 == 0) {
			r = r/2;
		}
		cout << r << endl;
	}
}

//g++ P52109.cpp && a.exe