#include <iostream>
#include <math.h>
using namespace std;

int main() {
 	double a, b, c;
 	cin >> a >> b >> c;
 	double solp, soln;
 	double insq = b*b - 4*a*c;
 	if (insq < 0) cout << "It has complex Roots!" << endl;
 	else {
 		cout. setf(ios::fixed);
		cout. precision(2);
 		solp = (-b + sqrt(insq))/(2*a);
 		soln = (-b - sqrt(insq))/(2*a);
 		cout << "x_+ = " << solp << "; ";
		cout << "x_- = " << soln << endl;
 	}
}
//g++ X60710.cpp -o X60710.exe && X60710.exe¡