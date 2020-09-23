#include <bits/stdc++.h>

using namespace std;

int Fsumar(int i) {
	int result = 0;
	while (i > 0) {
		result += (i % 10) * (i % 10);
		i /= 10;
	}
	return result;
}

int main() {
	int i;
	
	while (cin >> i) {
		bool w = false;
		int a = i;
		for (int j = 1; j < 30; j++) {
			i = Fsumar(i);
			if (i == a) {
				cout << a << " sisoy" << endl;
				j = 1000;
				w = true;
			}
		}
		if (!w) cout << a << " nosoy" << endl;
		i--;
	}
}