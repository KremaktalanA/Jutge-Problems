#include <iostream>
using namespace std;

double f(int a, int b, int k) {
	if (a+k > b) return 1.0/(a);
	return 1.0/(a) + f	(a+k, b, k);
}



int main() {
	int a,b,k;
	cout.setf(ios::fixed);
	cout.precision(4);
	while (cin >> a >> b >> k) {
		cout << f(a,b,k) << endl;
	}
}