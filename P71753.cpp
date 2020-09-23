#include <iostream>
using namespace std;

int main() {
	int x, s, m = 0;
	while (cin >> x) {
		cin >> s;
		m = s;
		for (int i = 1; i < x; ++i) {
			cin >> s;
			m = max(s,m);
		}
		cout << m << endl;
	}
	
}

//g++ P71753.cpp -o P71753.exe && P71753.exe