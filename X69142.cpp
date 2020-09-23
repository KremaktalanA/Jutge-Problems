#include <iostream>
using namespace std;
int main() {
 	int gf, cf, g;
 	g = 0;
 	cin >> gf >> cf;
 	while (cf != 0) {
 		if (gf >= cf) {
 			g++;
 			cin >> cf;
 		}
 	cout << g << endl;
	}
}

//g++ X69142.cpp -o X69142.exe && X69142.exe