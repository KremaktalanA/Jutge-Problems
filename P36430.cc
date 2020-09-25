#include <bits/stdc++.h>

using namespace std;

int main() {
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  bool p = false;

  for (int i = a; i <= b and !p; ++i) {
    for (int j = c; j <= d and !p; ++j) {
      double n = sqrt(i*i + j*j);
      int intn = int(n);
      if (n == double(intn)) {
        cout << i << "^2 + " << j << "^2 = " << intn << "^2" << endl;
        p = true;
      }
    }
  }
  if (!p) cout << "No solution!" << endl;
}
