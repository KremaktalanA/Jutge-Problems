#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int x, y, suma;
	suma = 0;
	cin >> x;
	for (int i = 1; i <= x; i++) {
		suma = suma + i * i;
	}
	cout << suma << endl;
}
