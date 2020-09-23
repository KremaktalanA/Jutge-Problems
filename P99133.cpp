#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int main() {
	int x;
	cin >> x;
	vector<string> c (x);
	vector<string> o (x); 
	string out = "";
	for (int i = 0; i < c.size(); ++i) {
		cin >> c[i];
	}
	for (int i = 0; i < c.size(); ++i) {
		out = "";
		for (int j = 0; i < c[i].size(); ++j) {
			out += c[i][c[i].size()-j];
		}
		o[i] = out;

	}
	//try
	for (int i = 0; i < c.size(); ++i) {
		cout << o[i] << endl;
	}
}


//g++ P99133.cpp -o P99133.exe && P99133.exe