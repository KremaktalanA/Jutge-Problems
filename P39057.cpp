#include <iostream>
#include <cmath>
using namespace std;

int main() {
	string s;
	while (cin >> s) {
		cout. setf(ios::fixed);
		cout. precision(6);
		if (s == "rectangle") {
			double  x,y;
			cin >> x >> y;
			double res = x*y;
			cout << res << endl;
		}
		else if (s == "cercle") {
			double z;
			cin >> z;
			double res2 = M_PI*(z*z);
			cout << res2 << endl;
		}
	}
	
}
//g++ P39057.cpp -o P39057.exe && P39057.exe