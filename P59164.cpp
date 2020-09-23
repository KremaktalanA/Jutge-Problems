#include <iostream>
using namespace std;

int factorial (int n) {
    int f = 1;
    for (int i = 1; i <= n; ++i) f = f*i;
    return f;
}

int main() {
    int n;
    while (cin >> n) {
        int x = factorial(n);
        int a = (n*(n + 1))/2;
        int b = 0;
        int y = 1;
        bool error = false;
        int i = 0;
        int min;
        int max;
        bool first = true;
        while (i < n) {
            int j;
            cin >> j;
            if (first) {
                min = j;
                max = j;
                first = false;
            }
            if (j < min) min = j;
            else if (j > max) max = j;
            y = y*j;
            b = b + j;
            if (j < 1 or j > n) error = true;
            ++i;
        }
        if (not error and x == y and a == b and min == 1 and max == n) cout << 1 << endl;
        else cout << 0 << endl;
    }
}

//g++ P59164.cpp -o P59164.exe && P59164.exe