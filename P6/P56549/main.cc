#include <iostream>
using namespace std;

void base_calc(int n, int base){
    // caso base cuando n/base == 0, entonces ya no hacemos nada. una induccion completa
    if(n/base != 0) base_calc(n/base, base);
    if(n%base >= 10) cout << char(n%base - 10 + 'A');
    else cout << n%base;
}

int main () {
    int n;
    while(cin >> n){
        // si es un void no se puede hacer un cout directamente ya que no devuelve ningun valor
        cout << n << " = ";
        base_calc(n, 2); 
        cout << ", ";
        base_calc(n, 8); 
        cout << ", " ;
        base_calc(n, 16); 
        cout << endl;
    }
}