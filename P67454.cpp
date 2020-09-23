#include <iostream> 

using namespace std;

int main() {
	string s;
	int as = 0;
	getline(cin,s);
	for (int i = 0; s[i] != '.'; ++i) {
		if (s[i] == 'a') {
			as++;
		}
	}
	cout << as << endl;
}

//g++ P67454.cpp -o P67454.exe && P67454.exe