#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string s;
	while (cin >> s) {
		for (int i = 1; i <= s.size(); ++i) {
			cout << s[s.size()-i];
		}
		cout << endl;
	}	
}

//g++ P78548.cpp -o P78548.exe && P78548.exe