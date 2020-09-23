#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int x;
	cin >> x;
	if (x != 0 ) { 
		while (x != 0) {
			cout << x % 16;
			x = x / 16;		
		}
	}
	else  {
		cout << 0;
	}
	cout << endl;
}
