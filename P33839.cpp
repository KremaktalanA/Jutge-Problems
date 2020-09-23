#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int suma = 0, i = n;
		while (n != 0) {
			suma += n % 10;
			n = n / 10; 
		}
		cout << "The sum of the digits of " << i << " is " << suma << "." << endl;
	}
}
