#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	vector <string> v;
	string a = "";
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] != ' ') a += s[i];
		if (s[i] == ' ')  v.push_back(a); a = ""; 
	}
	int r = 0;
	int b = 1;
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] == v[i+1]) {
			b++;
		}
		if (b > r) r = b; b = 0;
	}
	cout << r << endl;
	//debug:
	for (int i = 0; i < v.size(); ++i) {
		cerr << v[i] << " ";
	}
 }
 
//g++ P23001.cpp && a.exe