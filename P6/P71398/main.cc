#include <iostream>
using namespace std;

void digit_maxim_i_minim(int n, int& maxim, int& minim) {
    maxim = 0;
    minim = 9;
    // caso base es cuando n sea menor q 9, entonces no invocamos ya el recorrido, sino cogemos directamente el valor ya que solo queda último digito
    if (n > 9) digit_maxim_i_minim(n/10, maxim, minim);
    // cout << "maxim: " << maxim << endl;
    // cout << "minim: " << minim << endl;
    // cout << "n%10: " << n%10 << endl;
    // cout << "--------" << n%10 << endl;
    if (n%10 > maxim) maxim = n%10;
    if (n%10 < minim) minim = n%10;
}

int main () {
    int n, maxim, minim;
    cin >> n;
    digit_maxim_i_minim(n, maxim, minim);
    cout << n << ' ' << maxim << ' ' << minim << endl;
}