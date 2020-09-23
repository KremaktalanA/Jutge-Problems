#include <iostream>
#include <vector>
using namespace std;
 
typedef vector< vector<int> > Matrix;
bool is_symmetric(const Matrix& m) {
	int n = m.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; ++j) {
            if (m[i][j] != m[j][i]) return false;
        }
    }
    return true;
}