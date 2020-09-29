#include <bits/stdc++.h>

using namespace std;

void f(int n, string s) {
  if (s.size() == n-1) {
    cout << s << endl;
  }
  if (s[s.size()-1] != 'a') {
    s += 'a';
    f(n,s);
  }
  if (s[s.size()-1] != 'b') {
    s += 'b';
    f(n,s);
  }
  if (s[s.size()-1] != 'o') {
    s += 'o';
    f(n,s);
  }
}

int main () {
  int n;
  cin >> n;
  if(n == 1) cout << 'b' << endl;
  if(n == 2) cout << '' << endl;
  else{
    string s = "b";
    int j = 0;
    f(n, s);
  }
}
//not done
