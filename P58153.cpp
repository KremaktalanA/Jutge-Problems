#include <iostream>
using namespace std;

int main() {
	cout. setf(ios::fixed);
	cout. precision(10);
	
	double n,m,x,y = 0;
	while (cin >> n >> m) {
		x = 0;
		y = 0; 
		for (int i = 0; i < (n - m); ++i) {
		x = n - i;	
		y += 1/x;
		}   	
    	cout << y << endl;
	}
}
