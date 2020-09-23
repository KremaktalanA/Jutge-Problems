#include <iostream>
using namespace std;

int op() {
    int res;
    char c;
    cin >> c;
    if (c >= '0' and c <= '9') res = c - '0';    
    else {
        int n = op();
        cin >> c;
        while (c == ')') cin >> c;
        if (c == '+') res = n + op();
        else if (c == '-') res = n - op();
        else if (c == '*') res = n * op();
    }
    return res;
}

int main() {
    cout << op() << endl;
}