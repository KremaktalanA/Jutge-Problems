#include <iostream>
using namespace std;

int main() {
	int a, b, x=0, y=0, res = 0;	
	cin >> a >> b;
	x = max(a,b);
	y = min(a,b);
	while (y != 0) {
		res = x % y;
		x = y;
		y = res;
	}
	cout << "The gcd of " << a << " and " << b << " is " << x << "." << endl;
} 

//g++ P67723.cpp -o P67723.exe && P67723.exe