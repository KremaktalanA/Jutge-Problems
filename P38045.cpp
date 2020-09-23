#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double x;
  cout. setf(ios::fixed);
  cout. precision(6);
  double arr = 0; int qua = 0;
	while (cin >> x) {
	  qua = pow(x,2);
	  arr = sqrt(x);
	  cout << qua << " " << arr << endl;
	}
}