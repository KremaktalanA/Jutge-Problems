#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	int x;
	cin >> x;
	string lletres = "TRWAGMYFPDXBNJZSQVHLCKE";
	int n = x%23;
	cout << x << lletres[n] << endl;


}

//g++ P97139.cpp -o P97139.exe && P97139.exe