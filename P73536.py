#include <iostream>
using namespace std;

int main() {
	int count = 0;
	for (int c = 0;c < 50; ++c) {
		for (int b = 0; b < c; ++b) {
			for (int a = 0; a < c; ++a) {
				if (a*a + b*b == c*c) {
					count++;
				}
			}
		}
		if (count == 4) {
			cout << c << endl;
		}
	}
}
