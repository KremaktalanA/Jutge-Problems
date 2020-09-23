#include <iostream>
using namespace std;
 
 
void sort3(int& a,int& b, int& c) {
  int mx = max(a,max(b,c));
  int mn = min(a,min(b,c));
  int mig = 0;
  if (mx == a and mn == b) {
    mig = c;
  }
  else if (mx == a and mn == c) {
    mig = b;
  }
  else if (mx == b and mn == a) {
    mig = c;
  }
  else if (mx == b and mn == c) {
    mig = a;
  }
  else if (mx == c and mn == a) {
    mig = b;
  }
  else if (mx == c and mn == b) {
    mig = a;
  }
  a = mn;
  b = mig;
  c = mx;
 
}
 
int main() {
  int x,y,z;
  cin >> x >> y >> z;
  sort3(x,y,z);
  cout << x << " " << y << " " << z << endl;
}

//g++ P32954.cpp -o P32954.exe && P32954.exe