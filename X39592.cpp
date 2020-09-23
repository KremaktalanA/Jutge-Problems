#include <bits/stdc++.h>

using namespace std;

int f(int x) {
	if (x == 1 or x == 0) return x;
	return f(x-1)+f(x-2);
}


int main() {
	int x;
	for (int i = 0; i < 4; ++i) {
		cin >> x;
		cout << f(x) << " "; 
	}
	cout << endl;
}