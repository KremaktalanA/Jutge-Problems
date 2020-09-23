#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int x;
	cin >> x;
	if (x <= 9 and x >= 1) {
		for (int i = 1;i <= 10; ++i) {
			cout << x << "*"<< i << " = " << x*i << endl;
		}
	}
}
