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
        p = true;
        cout << a << "^2 + " << b << "^2 = " << intn << "^2" << endl;
      }
    }
  }
  if (!p) cout << "No solution!" << endl;
}
/*
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool solucio_trobada = false;

    for (int i = a; i <= b and not solucio_trobada ; ++i) {
        for (int j = c; j <= d and not solucio_trobada; ++j) {
            double n = sqrt(i*i + j*j);
            int num = int(n);
            if (n == double(num)) {
                cout << i << "^2 + " << j << "^2 = "
                     << num << "^2" << endl;
                solucio_trobada = true;

            }
        }
    }
    if (not solucio_trobada) {
        cout << "No solution!" << endl;
    }
}*/
