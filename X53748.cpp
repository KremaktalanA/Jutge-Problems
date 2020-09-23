#include <iostream>
using namespace std;

int main() {
	string n,e,g,c,s,t,w;
	string mp,p,pp;
	getline(cin,n);
	getline(cin,e);
	getline(cin,g);
	getline(cin,c);
	getline(cin,s);
	getline(cin,t);
	getline(cin,w);
	if (g == "girl") {
		mp = "She";
		p = "she";
		pp = "her";
	}
	else if (g == "boy") {
		mp = "He";
		p = "he";
		pp = "his";
	}
	cout << n << " is a " << e << " year-old " << g << ". " << mp <<" is living with " << pp << " parents in an apartment in the centre of "<< c << ", where " << p <<" hangs out with " << pp << " friends. Moreover, in " << pp << " free time "<< p <<" plays " << s << " in a team called " << t << ". " << n <<" would like to pursue a career in " << w << " when " << p << " is older, that's why " << p << " is studying hard." << endl;

}

//g++ X53748.cpp -o X53748.exe && X53748.exe