#include <iostream>
#include <cmath>
using namespace std;

string dia_de_la_semana(int d, int m, int a) {
	int m1 = m-2;
	int a1 = 0;

	if (m1 <= 0) {
		m1 += 12;
		a1 = a - 1;  
	}
	double c1 = a1/100;
	int c = c1;
	int y = (c1 - c) * 100;
	int f = floor(2.6 * m1 - 0.2) + d + y + floor(y/4) + floor(c/4) - 2 * c;
	if (f = 1) return "dilluns";
} 

int main() {
	int d,m,a;
	cin >> d >> m >> a;
	dia_de_la_semana(d,m,a);
}

//g++ P18777.cpp -o P18777.exe && P18777.exe