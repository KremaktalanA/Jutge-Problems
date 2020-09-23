#include <iostream>
using namespace std;

bool xd(string& s,int i,int a) {
	if (a < 0) return false;
	if (i == s.size()) {
		//return;
		if (a == 0) return true;
		else return false;
	}
	if (s[i] == '(') return xd(s,i+1,a+1);
	if (s[i] == ')') return xd(s,i+1,a-1); 
}


int main() {
	string s;
	cin >> s;
	if (xd(s,0,0)) cout << "yes" << endl;	
	else cout << "no" << endl;
	//xd("(())()()",0,0);

}

//g++ P31111.cpp -static && a.exe