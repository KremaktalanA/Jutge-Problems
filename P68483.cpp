#include <iostream>
using namespace std;

int main() {
	string c;
	string s;
	while (getline(cin, c) and getline(cin, s)) {
		cout << s << endl;
	}

}

//g++ P68483.cpp -o P68483.exe && P68483.exe