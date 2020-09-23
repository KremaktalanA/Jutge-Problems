#include <iostream>
#include <vector>

using namespace std;
typedef unsigned long long int ulli;

int main() {
	ulli a = 3, b = 3;
	vector <ulli> v (8,1);
	for (int i = 0; i < 8; ++i) {
		cout << "A" << i << " = " << a << endl;
		cout << "B" << i << " = " << b << endl; 
		v[i] = a;
		a = 1;
		for (int j = 0; j < 8; ++j) {
			a *= v[j];
 		}
 		a += 2;
 		b = a % 10; 
	}
}