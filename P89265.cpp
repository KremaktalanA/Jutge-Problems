#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a == c) and (b == d)){
        cout << "=";
    }

    else if ((a >= c) and (b <= d)) {
        cout << "1";
    }

    else if ((c >= a) and (d <= b)) {
        cout << "2";
    }

    else {
        cout << "?";
    }

    cout << " , ";

    //mirem punts de tall

    int x, y;

    if (a >= c) x = a; //mirem si a és el valor més alt en el tram baix de l'interval. Si a és gran l'afafem
        // [] () -> c[ a( d] b) 
        
        
    else x = c; //sino agafem c com a major.
        // [] () -> a[ c( b] d)
    
    
    if (b <= d) y = b; // mirem on intersecta superiorment (tram alt)
        // [] () -> a[ c( b] d)
    else y = d; //sinn agafem el valor de d
        // [] () -> a[ c( d] b)

    if (x <= y) cout << "[" << x << "," << y << "]" << endl;


    else cout << "[]" << endl;
}