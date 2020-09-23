#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v(5);
	while (cin >> v[0]) {
		for (int i = 1; i < 5;++i) {
			cin >> v[i];
		}
		sort(v.begin(),v.end());
		cout << v[2] << endl;
	}
}
	

//g++ P48441.cpp -o P48441.exe && P48441.exe