#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	for (int i = 0; i < x+1; ++i){
		cout << x-i << " ";
	}
	cout << endl;
}