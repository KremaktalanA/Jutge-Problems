#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin >> x >> y;
	
	if (y > x) {
		for (int i = y; i >= x; --i) {
			cout << i << endl;
		}
		
	}
	else if (y < x) {
		for (int i = x; i >= y; --i) {
			cout << i << endl;
		}
	}
	else cout << x << endl;
}
