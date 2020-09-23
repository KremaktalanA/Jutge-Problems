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
	cout << as << endl;
}
//g++ P97969.cpp -o P97969.exe && P97969.exe