#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,res = 0;
	cin >> n;
	char a;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> a;
			res += (a - '0');
		}
	}
	cout << res << endl;
}