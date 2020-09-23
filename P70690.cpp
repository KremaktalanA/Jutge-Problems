#include <iostream>
#include <vector>
using namespace std;

bool move(vector <string>& mapa, int i , int j,int n, int m) {
	if (i >= 0 and i < n and j >= 0 and j < m) {
		if (mapa[i][j] == 't') return true;
		if (mapa[i][j] == 'X') return false;
		else {
			return move(mapa, i,j+1,n,m) or move(mapa, i+1,j,n,m) or move(mapa, i-1,j,n,m) or move(mapa,i,j-1,n,m);
		}
		mapa[i][j] = 'X';
	}
}


int main() {
	int n,m;
	cin >> n >> m;
	vector <string> v (m);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	int r,c;
	cin >> r >> c;
	if (move(v,r,c,n,m)) cout << "Yes" << endl;
	else cout << "No" << endl;
}