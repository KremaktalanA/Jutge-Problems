#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int factorial_doble(int n) {
	int i = 2;
	if (n == 0 or n == 1) {
		return 1;
	}
	else {
		return n * factorial_doble(n-i); 
		i =+ 2; 
	} 
}



int main() {
    int x;
  	while (cin >> x) cout << factorial_doble(x) << endl;
}


//g++ P61384.cpp -o P61384.exe && P61384.exe