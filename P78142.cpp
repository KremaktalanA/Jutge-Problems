#include <iostream>
using namespace std;

int main() {
	cout. setf(ios::fixed);
	cout. precision(2);

	double x, sum = 0, veg = 0;
	while (cin >> x) {
		sum += x;
		++veg;
	}
	cout << sum / veg << endl;
}