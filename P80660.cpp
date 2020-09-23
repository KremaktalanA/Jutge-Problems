#include <iostream>
using namespace std;

int main() {
	int n, veg = 0;
	while (cin >> n) {
		veg = 0;
		while(n != 1){

		if(n % 2 == 0){	
			n /= 2;
		}
		else {
			n= 3 * n + 1;
		}
		veg += 1; 
		}
		cout << veg << endl; 
	}		
}