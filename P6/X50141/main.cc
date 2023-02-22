#include <iostream>
using namespace std;

int find_max(int f, int x) {
    if(f > x) return f;
    else return x;
}

int fatten (int x) {
    if(x < 10) return x;
    else {
        int f = fatten(x/10);
        int max = find_max(f%10, x%10);
        return f * 10 + max;
    }
}

int main () {
    int n;
    cin >> n;
    cout << fatten(n) << endl;
}