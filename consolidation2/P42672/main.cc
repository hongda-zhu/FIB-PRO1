#include <iostream>
using namespace std;

void basetwomix(int a, int b) {
    if (a/2 != 0) basetwomix (a/2, b/2);
    cout << a%2 << b%2; 
}

int main () {
    int a, b;
    while (cin >> a >> b) {
        basetwomix(a,b);
        cout << endl;
    }
}