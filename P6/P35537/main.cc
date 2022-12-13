#include <iostream>
using namespace std;

bool is_increasing(int n){
    // caso base
    if(n < 10) return true;
    // planteamiento, sacar el n_prev y n_actual
    else if(n / 10 % 10 <= n % 10) return is_increasing(n /10);
    else return false;
}

int main () {
    int n;
    while(cin >> n){
        cout << is_increasing(n) << endl; 
    }
}