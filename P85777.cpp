#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin >> x >> y;
	int sum = x+y;
	if (sum % 2 == 0) {
		cout << "primer" << endl;
	}
	else {
		cout << "segon" << endl;
	}
}

//g++ P85777.cpp -o P85777.exe && P85777