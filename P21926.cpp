#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ULL;

int main() {
	ULL n,m;
	vector <ULL> v (1001);
	while (cin >> n >> m) {
		v[0] = 1 % m;
		v[1] = v[0];
		for (int i = 2; i <= 1000; ++i) {
			v[i] = (v[i-1] + v[i-2]) % m;
		}
		if (n == 0) cout << 0 << endl;
		else {
			cout << v[n-1] << endl;
		}
	}
}