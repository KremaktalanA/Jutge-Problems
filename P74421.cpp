#include <iostream>
#include <vector>
using namespace std;
 int main() {
    int n;
    int cas = 1;
    while (cin >> n) {
        vector <int>v (n);
        for(int i = 0; i < v.size(); i++){
            cin >> v[i];
        }
        vector <int>k (n);
        k[0] = v[0];
        for(int i = 1; i < v.size(); i++){
            k[i] = v[i] + k[i - 1];
        }
        int q;
        cin >> q;
        cout << '#' << cas << endl;
        for (int i = 0; i < q; i++) {
            int c,p;
            cin >> c >> p;
            if (p < c) {
                swap(c,p);
            }
            if (c == 1) {
                cout << k[p - 1] << endl;
            }
            else if (c == p) {
                cout << v[p - 1] << endl;
            }
            else {
                cout << k[p - 1] - k[c - 2] << endl;
            }
        }
        cas++;
    }
}