#include <iostream>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				for (int k = 0; k < n*n; ++k) {
					cout << k;
			}
		cout << endl;
		}
	}
}
	
//g++ P34080.cpp -o P34080.exe && P34080.exe