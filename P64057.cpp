#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> y2 >> x2;
	if (x1+x2 > y1+y2) {
		cout << 'X' << endl;
	}
	else if (x1+x2 < y1+y2) {
		cout << 'Y' << endl;
	}
	else if (x2 > y1) {
		cout << 'X' << endl;
	}
	else if (x2 < y1) {
		cout << 'Y' << endl;
	}
	else {
		cout << "P" << endl;
	}
}

//g++ P64057.cpp && a.exe