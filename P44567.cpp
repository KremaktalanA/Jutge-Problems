#include <iostream>
using namespace std;

int main() {
	int x;
	while (cin >> x) {
		int c = 0;
		string n = "";
		string m = "";
		if (x != 0) {
			while (x != 0) {
				c = x%2;
				if (c == 0) n += "0";
				else n += "1";
				x = x/2;
			}
		}
		else {
			n = "0";
		}
		for (int i = 1; i <= n.size(); ++i) {
			m += n[n.size()-i]; 
		}
		cerr << m << endl;
	}
}

//g++ P44567.cpp && a.exe