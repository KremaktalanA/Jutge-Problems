#include <vector>
#include <iostream>
using namespace std;	

int first_occurrence(double x, const vector<double>& v) {
	int len = v.size();
	if (len == 0) {
		return -1;
	}
	else {
		if (v[0] == x) {
			return 0;
		}
		else if (len == 1 || v[0] > x) {
			return -1;
		}
	}
	int L = 1;
	int R = len-1;
	int M = (L+R)/2;
	while (L < R) {
		if (v[M] == x && v[M-1] != x) {
			return M;
		}
		else if (v[M]  < x) {
			L = M+1;
		}
		else {
			R = M-1;
		}
		M = (L+R)/2;
	}
	if (v[M] == x && v[M-1] != x) {
		return M;
	}
	else {
		return -1;
	}
}


int main() {
	vector<double> v = {1, 2, 4, 7, 8};
 	cout << first_occurrence(2,v) << endl;
}
//g++ P84219.cpp -o P84219.exe && P84219.exe
