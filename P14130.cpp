#include <iostream>
#include <vector>
using namespace std;

int main() {
  int m, n = 0;
  cin >> m;

  vector<int> a (m);

  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < m-1; ++i) {
  	if (a[i] == a[m-1]) {
  		++n;
  	}
  }
  cout << n << endl;
}

//g++ P14130.cpp -o P14130.exe && P14130.exe																					