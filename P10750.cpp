#include <iostream>
using namespace std;

int main() {
	for (int x = -1000; x < 1000;++x) {
		for (int y = -1000; y < 1000;++y) {
			for (int z = -1000; z < 1000;++z) {
				if (x*y+z == 2 and y*z+x == 2 and z*x+y == 2) {
					cout << x << " " << y << " " << z << endl;
				}
			}
		}
	}
}

//g++ P10750.cpp -o P10750.exe && P10750.exe