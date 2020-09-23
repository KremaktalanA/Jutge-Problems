#include <iostream>
using namespace std;

void print(int s, char c, int n) {
	for (int i = 0; i < s; ++i) {
		cout << " ";
	}
	for (int i = 0; i < n;++i) {
		cout << c;
	}
	cout << endl;
}

int main() {
	int x,y;
	char c;
	cin >> x >> c >> y;
	print(x,c,y);
}

//g++ P99541.cpp -o P99541.exe && P99541.exe