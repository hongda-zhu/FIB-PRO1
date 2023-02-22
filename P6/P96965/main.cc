#include <iostream>
using namespace std;

int sum_of_digits(int n){
    // caso base en el sum of digits
    if(n < 10) return n;
    // sino: hago n%10 que me colecciona el último número y luego hago n/10 que me quita el último número y vuelvo a entrar el loop con el nuevo valor
    return n%10 + sum_of_digits(n/10);
}

int reduction_of_digits(int n){
    int res = sum_of_digits(n);
    // caso base cuando el sum es menor que 10 ya, entonces ya tenemos el resultado
    if(res < 10) return res;
    // sino vuelvo a recorrer reduction_of_digits para invocar de nuevo sum_of_digits
    return reduction_of_digits(res);
}

int main () {
    int n;
    while (cin >> n) {
        cout << reduction_of_digits(n) << endl;
    }
}