#include <iostream>
using namespace std;

int max2(int a,int b) {
	return max(a,b);
}

int main() {
	int x, y;
	cin >> x >> y;
	cout << max2(x,y);
}

//g++ P57846.cpp -o P57846.exe && P57846.exe