#include <iostream>
using namespace std;
int main() {
	int x, age = 0, days = 0;
	string y;
	cin >> x >> y;
	if (y == "Mercury") {
		days = 88;
	}
	if (y == "Venus") {
		days = 225;
	}
	if (y == "Earth") {
		days = 365;
	}
	if (y == "Mars") {
		days = 687;
	}
	if (y == "Jupiter") {
		days = 4333;
	}
	if (y == "Saturn") {
		days = 10759;
	}
	if (y == "Uranus") {
		days = 30689;
	}
	if (y == "Neptune") {
		days = 60182;
	}
	age = x*days/365;
	cout << age << endl;
}