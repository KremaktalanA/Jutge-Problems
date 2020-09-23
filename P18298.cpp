#include <iostream>
#include <vector>
using namespace std;
int main() {
	int x;
	int au = 0;
	while (cin >> x) {
		au = x;
		for (int i = 0; i < x; i++) {
			cout << x << " = ";
			if (au < 3) {
				cout << "I";
				au--;
			}
			if (au < 5)
		}
	}
}