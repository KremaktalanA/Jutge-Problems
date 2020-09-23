#include <iostream>
#include <math.h>
#include <vector>
 
using namespace std;
 
bool isPerfectSquare(int x){
    int s = sqrt(x);
    return (s * s == x);
}
 
bool isFibonacci(int n){
    return isPerfectSquare(5 * n * n + 4) ||
           isPerfectSquare(5 * n * n - 4);
}
 
string calcular(vector <int>& v){
    vector <int> fiboritos;
    bool yes = true;
    for(int i = 0; i < v.size(); i++){
        if(isFibonacci(v[i]) || for(int j = 0; j < fiboritos.size(); j++) v[i] != fiboritos[j]) fiboritos.push_back(v[i]);
    }
    for(int i = 1; i < fiboritos.size(); i++){
        if (yes){
            if (fiboritos[i - 1] + fiboritos [i] == fiboritos[i + 1]){
                bool yes = true
            }
        }
        else{
            bool yes = false;
            break;
        }
    }
    if(yes){
        return "yes";
    }
    else{
        return "no"
    }
}
 
int main(){
    int n;
    vector <int> input;
    while(cin >> n){
        if(n =! 0){
            input.push_back(n);
        }
        else{
            cout calcular(input);
            input.clear();
        }
    }
}