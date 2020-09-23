#include <iostream>
using namespace std;
 
 
void swap2(int& a,int& b) {
  int a2 = a;
  a = b;
  b = a2;
 
}
 
int main() {
  int x, y;
  cin >> x >> y;
  swap2 (x, y);
  cout << x << " " << y << endl;
 
}