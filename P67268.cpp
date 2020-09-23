#include <iostream>
#include <vector>

using namespace std;

int main() {
	int x;
	while (cin >> x) {
    vector<int> v (x);
    for (int i = 0; i < x; ++i) {
    	cin >> v[i];
    }

    for (int i = 1; i <= x; ++i) {
    	cout << v[x-i];
    	if (i < x) {
	   		cout << " ";
    		}
	    }
	   cout << endl;    
	}
	cout << endl;
}

//g++ P67268.cpp -o P67268.exe && P67268.exe	