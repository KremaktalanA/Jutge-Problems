#include <iostream>
using namespace std;

int main() {
	string s; 
	int y = 0, x = 0;
	getline(cin,s);
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'n') {
			y--;
		}
		if (s[i] == 's') {
			y++;
		}
		if (s[i] == 'o') {
			x--;
		}
		if (s[i] == 'e') {
			x++;
		}
	}
	cout << "(" << x << ", " << y << ")" << endl;
}

//g++ P79784.cpp -o P79784.exe && P79784.exe