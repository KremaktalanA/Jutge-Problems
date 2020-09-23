#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	int a2 = max(a,b);
	int b2 = min(a,b);
	int r = 0;
	if (b2 == 0) {
		return a2;
	}
	else {
		r = a2%b2;
		a2 = b2;
		b2 = r;
	}
	return gcd(a2,b2);
}

int main() {
	int a,b;
	cin >> a >> b;
	cout << gcd(a,b) << endl;
}