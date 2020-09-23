#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int x, y;
	cin >> x;
	for (int i = 0; i <= x; ++i) {
		cout << i*i*i;
		if (i < x) {
			cout << ","; 
		}
	}
	cout << endl;
}

