#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

int main() {
	string s = "#include <bits/stdc++.h>using namespace std;typedef unsigned long long int ull;int main() {string s = "";char c;int r = 0;while (cin >> c) {for (int i = 0; i < s.size(); ++i) {if (s[i] == c) r++;}cout << r << endl;";
	char c;
	while (cin >> c) {
		int r = 0;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == c) r++;
		}
		cout << r*2 << endl;
	}
}