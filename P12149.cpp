#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin >> x;
	for (int i = 0; i <= 10; ++i) {
		int n = x * i;
		if (x == 1) cout << "u x ";
		if (x == 2) cout << "dos x ";
		if (x == 3) cout << "tres x ";
		if (x == 4) cout << "quatre x ";
		if (x == 5) cout << "cinc x ";
		if (x == 6) cout << "sis x ";
		if (x == 7) cout << "set x ";
		if (x == 8) cout << "vuit x ";
		if (x == 9) cout << "nou x ";
		if (x == 10) cout << "deu x ";	

		if (i == 0) cout << "zero = ";
		if (i == 1) cout << "u = ";
		if (i == 2) cout << "dos = ";
		if (i == 3) cout << "tres = ";
		if (i == 4) cout << "quatre = ";
		if (i == 5) cout << "cinc = ";
		if (i == 6) cout << "sis = ";
		if (i == 7) cout << "set = ";
		if (i == 8) cout << "vuit = ";
		if (i == 9) cout << "nou = ";
		if (i == 10) cout << "deu = ";

		if (n == 0) cout << "zero" << endl; 

		if (n > 9 and n < 20) {
			if (n == 10) cout << "deu" << endl;
			if (n%10 == 1) cout << "onze" << endl;
			if (n%10 == 2) cout << "dotze" << endl;
			if (n%10 == 3) cout << "tretze" << endl;
			if (n%10 == 4) cout << "catorze" << endl;
			if (n%10 == 5) cout << "quinze" << endl;
			if (n%10 == 6) cout << "setze" << endl;
			if (n%10 == 7) cout << "disset" << endl;
			if (n%10 == 8) cout << "divuit" << endl;
			if (n%10 == 9) cout << "dinou" << endl;
		}

		if (n == 20) cout << "vint" << endl;
		if (n == 30) cout << "trenta" << endl;
		if (n == 40) cout << "quaranta" << endl;
		if (n == 50) cout << "cinquanta" << endl;
		if (n == 60) cout << "seixanta" << endl;
		if (n == 70) cout << "setanta" << endl;
		if (n == 80) cout << "vuitanta" << endl;
		if (n == 90) cout << "noranta" << endl;
		if (n == 100) cout << "cent" << endl;

		if (n % 10 != 0) {
			if (n > 20 and n < 30) cout << "vint-i-";
			if (n > 30 and n < 40) cout << "trenta-";
			if (n > 40 and n < 50) cout << "quaranta-";
			if (n > 50 and n < 60) cout << "cinquanta-";
			if (n > 60 and n < 70) cout << "seixanta-";
			if (n > 70 and n < 80) cout << "setanta-";
			if (n > 80 and n < 90) cout << "vuitanta-"; 
			if (n > 90 and n < 100) cout << "noranta-";
			if (n == 100) cout << "cent"; 
		}
		

		if (n == 1) cout << "u" << endl;
		if (n == 2) cout << "dos" << endl;
		if (n == 3) cout << "tres" << endl;
		if (n == 4) cout << "quatre" << endl;
		if (n == 5) cout << "cinc" << endl;
		if (n == 6) cout << "sis" << endl;
		if (n == 7) cout << "set" << endl;
		if (n == 8) cout << "vuit" << endl;
		if (n == 9) cout << "nou" << endl;

		if (n > 20) {
			if (n % 10 == 1) cout << "u" << endl;
			if (n % 10 == 2) cout << "dos" << endl;
			if (n % 10 == 3) cout << "tres" << endl;
			if (n % 10 == 4) cout << "quatre" << endl;
			if (n % 10 == 5) cout << "cinc" << endl;
			if (n % 10 == 6) cout << "sis" << endl;
			if (n % 10 == 7) cout << "set" << endl;
			if (n % 10 == 8) cout << "vuit" << endl;
			if (n % 10 == 9) cout << "nou" << endl;
		}
	}

}