#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int counter = 0;
        int v, aux;
        cin >> v;
        aux = v;
        while (v != 0) {
            cin >> v;
            if(v > aux) ++counter;
            aux = v;
        }
        cout << counter << endl;
    }
}