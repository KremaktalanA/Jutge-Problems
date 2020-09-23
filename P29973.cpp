#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int x = 1; x <= n; ++x) {
		for (int i = 1; i <= x; ++i) {
			cout << "*";
		}
		cout << endl;
	}
}
