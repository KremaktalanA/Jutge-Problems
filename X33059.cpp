#include <iostream>
using namespace std;

int main() {
  double x;
  cout. setf(ios::fixed);
	cout. precision(2);
	while (cin >> x and x != -1) {
    char s;
    double p1 = 2;
    double p2 = 1.8;
    cin >> s;
    if (s == 'Y') {
      cout << x*p2 << endl;
    }
    if (s == 'N') {
      cout << x*p1 << endl;
    }
  }
}