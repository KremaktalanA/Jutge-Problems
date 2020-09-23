#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;
  if (x > 30) {
    cout << "it's hot" << endl;
  }
  else if (x < 10) {
    cout << "it's cold" << endl;
  }
  else {
    cout << "it's ok" << endl;
  }
  if (x <= 0) {
    cout << "water would freeze" << endl;
  }
  else if (x >=100) {
    cout << "water would boil" << endl;
  }
}