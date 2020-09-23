#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	bool a = false;
	if (s[0] == 'A' and s[1] == 'U') {
		for (int i = 2; i < s.size(); ++i) {
			if (s[i] == 'A' and s[i+1] == 'A' and (s[i+2] != 'U' or s[i+3] != 'T')) { 
				cout << "Glycine";
				i++;
				a = true;
			}
			else if (s[i] == 'A' and s[i+1] == 'T' and (s[i+2] != 'U' or s[i+3] != 'T')) { 
				cout << "Cysteine"; 
				i++;
				a = true;
			}
			else if (s[i] == 'T' and s[i+1] == 'U' and (s[i+2] != 'U' or s[i+3] != 'T')) { 
				cout << "Arginine"; 
				i++;
				a = true;
			}
			else if (s[i] == 'U' and s[i+1] == 'A' and (s[i+2] != 'U' or s[i+3] != 'T')) { 
				cout << "Serine"; 
				i++;
				a = true;
			}
			else if (s[i] == 'U' and s[i+1] == 'U' and (s[i+2] != 'U' or s[i+3] != 'T')) { 
				cout << "Lysine"; 
				i++;
				a = true;
			}
			if (s[i] == 'T' and s[i+1] == 'A') break;
			if (s[i] == 'T' and s[i+1] == 'T') break;
		}
	}
	if (!a) cout << "None";
	cout << endl;
}q