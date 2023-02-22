#include <iostream>
using namespace std;

bool is_ptg(int a, int b) {
    int sum = a*a + b*b;
    int i = 0;
    while (i*i <= sum) {
        if(i*i == sum) return true;
        ++i;
    }
    return false;
}

int main () {
    int n, prev;
    int counter = 0;
    int found = false;
    cin >> prev;
    while (not found and cin >> n) {
        if(is_ptg(prev, n))
            found = true;
        if(not found) prev = n;
        ++counter;
    }
    if(found) cout << "First pythagorean pair " << prev << ' ' <<  n << " at position " << counter << endl;
    else cout << "No pythagorean pairs" << endl;
}