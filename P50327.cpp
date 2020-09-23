#include <iostream>

using namespace std;

int main() {
	string x, y, str;
	cin >> x;
	for (int i = 1; i <= x.size(); ++i) {
		y = y + x[x.size()-i];
	}
	cout << y << endl;
}
