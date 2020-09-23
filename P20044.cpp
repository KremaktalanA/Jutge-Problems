#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		string s = "0";
		string a = ""; 
		for (int i = 0; i < n; ++i) {
			a = "";
			for (int j = 0; j < s.size() and s.size() < n; ++j) {
				if (s[j] == '0') {
					a += "1";
				}
				else {
					a += "0";
				}
			}
			s += a; 	 
		}
		for (int i = 0; i < n; ++i) {
			cout << s[i];
		}
		cout << endl;
	}
}

//g++ P20044.cpp && a.exe