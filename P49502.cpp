#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

bool f(int n) {
	if (n == 20 or n == 30 or n== 40 or n == 50 or n == 60) return false;
	if (n % (n%10) == 0) return true;
	return false;
}

int main() {
	int r = 0;
	for (int i = 20; i <= 60; i++) {
		if (f(i)) r++;
	}
	cout << r << endl;
}