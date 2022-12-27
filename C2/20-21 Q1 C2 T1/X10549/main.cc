#include <iostream>
#include <vector>
using namespace std;

// Pre: x > 0
// Post: retorna el valor que resulta de eliminar a x sus dígitos igual a 0
int elimina_ceros(int n) {
    if (n/10 == 0) return n;
    if (n%10 != 0) return n%10 + elimina_ceros(n/10)*10;
    else return elimina_ceros(n/10);
}

int main () {
    int n;
    while (cin >> n) 
        cout << elimina_ceros(n) << endl;
}