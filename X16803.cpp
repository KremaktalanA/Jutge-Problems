/*#include <iostream>
#include <vector>
using namespace std;

int main() {
	unsigned long long int x_1, r_1, n_1;
	int x;
  	bool comp1 = true;
  	cin >> x_1;
  	r_1 = x_1;
  	for (int i = 2; i*i <= x_1; ++i){
  		if (x_1 % i == 0) {
      	comp1 = false;
      	break;
    	}
  	}
  	int n = 0;
  	while (x_1 != 0) {
  		n_1 *= 10;
    	n_1 += x_1 % 10;
    	x_1 = x_1 / 10;
  	}
  	bool comp2 = true;
  	for (int i = 2; i*i <= n; ++i){
  	  if (n_1 % i == 0) {
    	  comp2 = false;
    	  break;
    	}
  	}
  	if (comp1 == true and comp2 == true) {
    	cout << r_1 << " is an emirp number"<< endl;
  	}
  	else {
  	  	cout << r_1 << " is not an emirp number" << endl;
  	}
}*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <climits>
#include <algorithm>
#include <vector>
#include <array>
#include <queue>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
using namespace std;

#define PI 3.14159265
#define PHI 1.61803398

#define D(x) cerr << #x << " = " << (x) << ", "

typedef unsigned int uint;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef unsigned char byte;

template<typename T> using V = vector<T>;
template<typename T, typename U> using P = pair<T,U>;
template<typename T, typename U> using umap = unordered_map<T,U>;
template<typename T, typename U> using uset = unordered_set<T,U>;
template<typename T> using min_heap = priority_queue<T, vector<T>, greater<T>>;
template<typename T> using max_heap = priority_queue<T>;

int reverse(int n)
{
	int s = 0;
	while (n > 0) {
		s *= 10;
		s += n%10;
		n /= 10;
	}
	return s;
}

bool prime(int n)
{
	for (int i = 2; i*i <= n; ++i) {
		if (n % i == 0) return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	int r = reverse(n);
	if (n != r and prime(n) and prime(r)) {
		cout << n << " is an emirp number" << endl;
	}
	else {
		cout << n << " is not an emirp number" << endl;
	}
}