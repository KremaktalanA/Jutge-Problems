#include <iostream>
using namespace std;
 
int main() {
    int a, b, n = 0, c = 0;
    while (cin >> a >> b) {
        if (a % b == 0) {
            n++;
            cout << '#' << n << " : " << a << endl;
        }
        else {
            c = a % b;
            c = a - c;
            int mcm = c + b;
            n++;
            cout << '#' << n << " : " << mcm << endl;
        }
        
    }
}
//g++ P84735.cpp -o P84735.exe && P84735.exe