#include <iostream>
using namespace std;

int main() {
	string s;
  	int upper = 0;
  	int lower = 0;
  	int other = 0;
  	getline (cin, s);
  	for (int i = 0; i < s.size(); i++) {
    	if (s[i] <= 'Z' and s[i] >= 'A') {
      		upper++;
    	}
    	else if (s[i] <= 'z' and s[i] >= 'a') {
      		lower++;
    	}
    	else if (s[i] != ' ') {
    		other++;
    	}
  	}
  	cout << "Uppercase " << upper << endl;
  	cout << "Lowercase " << lower << endl;
  	cout << "Other " << other << endl;
}

//g++ X20370.cpp -o X20370.exe && X20370.exe