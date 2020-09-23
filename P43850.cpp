#include <iostream>
using namespace std;
int main() {
  int x;
  while (cin >> x) {
    x = x / 5;
    x = x - 9;
    x = x / 4;
    x = x - 6;
    x = x / 5;
    cout << x << endl;
  }
  
}
