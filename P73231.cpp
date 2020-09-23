#include <iostream> 
using namespace std;

int max4(int a,int b,int c,int d) {
	if (a >= b and a >= c and a >= d) {
		return a;
	}
	else if (b >= a and b >= c and b >= d) {
		return b;
	}
	else if (c >= a and c >= b and c >= d) {
		return c;
	}
	else {
		return d;
	}
}

int main() {
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	cout << max4(a,b,c,d) << endl;
}
//g++ P73231.cpp -o P73231.exe && P73231.exe