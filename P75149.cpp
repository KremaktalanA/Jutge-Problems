#include <iostream>
using namespace std;

int main() {
	string a; int as = 0;
	getline(cin,a);
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] == 'a') {
			as++;
		}
	}
	if (as >= 1) {
		cout << "si" << endl;
	}
	else {
		cout << "no" << endl;
	}
}

//g++ P75149.cpp -o P75149.exe && P75149.exe