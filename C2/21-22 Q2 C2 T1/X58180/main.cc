#include <iostream>
using namespace std;

bool is_subchain(int a, int b){
    if (a == 0) return true;
    while (a%10 != b%10 and b != 0) {
        b /= 10;
    }
    if (b != 0) return is_subchain(a/10, b/10);
    return false;
}


int main() {
    int a, b;
    while (cin >> a >> b){
        if (is_subchain(a,b)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}