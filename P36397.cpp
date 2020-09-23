#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

int main() {
	ull n;
	while (cin >> n) {
		if (n == 1) cout << 2 << endl;
		else if (n%2==0) cout << 3 << endl;
		else cout << 4 << endl;
	}	
}