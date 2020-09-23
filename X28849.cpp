#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int z = 1;
	int d = 0;	
	int i = 0;
	int dead = 0;
	while (n > 0) {
		i = z*2;
		dead = ceil(z*0.25);
		n -= i;
		z += i-dead;
		d++;
	}
	cout << d << " days"<<endl;
}