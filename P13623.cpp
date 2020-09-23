#include <bits/stdc++.h>
using namespace std;

int main() {
	int r,c,res = 0;
	cin >> r >> c;
	char a;
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			cin >> a;
			if ((i+j) % 2 == 0)res += (a - '0');
		}
	}
	cout << res << endl;
}