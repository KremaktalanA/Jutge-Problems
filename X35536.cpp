#include <iostream>

using namespace std;

int main() {
	string s;
	while (cin >> s and s != "#") {
		string r = "";
		for (int i = 0; i <= s.size(); ++i) {
			r += s[s.size()-1-i];
		}
		cout << r << endl;
	}
}

//g++ X35536.cpp -o X35536.exe && X35536.exe