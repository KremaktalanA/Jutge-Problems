#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin >> x >> y;
	int r = 0;
	int a;
	for (int i = 0; i < y; ++i) {
		cin >> a;
		while (a != 0) r += a%10; a /= 10;
	}
	cout << r << endl;
}