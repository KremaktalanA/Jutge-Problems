#include <iostream>
#include <vector>
using namespace std;

bool es_perfecte(int n)
{
	vector<int> v;
	for(int i = 1; i <= n; ++i) {
		if (n % i == 0) {
			v[i] = i;
		}
	}
	int s = 0;
	for (int i = 1; i <= v.size(); ++i) {
		s = s + v[i];
	}
	if (s == n) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int n;
	cin >> n;
}

//g++ P34091.cpp -o P34091.exe && P34091.exe