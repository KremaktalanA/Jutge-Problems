#include <iostream>
using namespace std;

int i = 0;

bool es_creixent(int n) {
	string s = to_string(n);
	//cerr << s << endl;
	if (s[i] < s[i+1]) {
		++i;
		//cerr << "Case " << i << ": " << s[i] << " < " << s[i+1] << endl;
		if (s.size() == i) return true;
		es_creixent(n);
	}
	else {
		return false;
	}
} 


int main() {
	int n;
	cin >> n;
	if (es_creixent(n)) cout << "true" << endl;
	else cout << "false" << endl;
}

//g++ P35537.cpp && a.exe