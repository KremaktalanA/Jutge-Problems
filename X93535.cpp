#include <bits/stdc++.h>

using namespace std;

typedef vector<pair<char,int> > VP;

int f(VP v, char c) {
	for (int i = 0; i < 26; ++i) {
		if (c == v[i].first or c+32 == v[i].first) return i;
	}
}

int main() {
	char c;
	VP v = {{'a',0},{'b',0},{'c',0},{'d',0},{'e',0},{'f',0},{'g',0},{'h',0},{'i',0},{'j',0},{'k',0},{'l',0},{'m',0},{'n',0},{'o',0},{'p',0},{'q',0},{'r',0},{'s',0},{'t',0},{'u',0},{'v',0},{'w',0},{'x',0},{'y',0},{'z',0}};
	while (cin >> c) {
		if ((c >= 65 and c <= 90) or (c >= 97 and c <= 122)) v[f(v,c)].second += 1;	
	}
	for (int i = 1; i <= 26; ++i) {
		cout << v[26-i].first << " = " << v[26-i].second << endl;
	}
}