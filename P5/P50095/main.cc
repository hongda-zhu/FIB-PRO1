#include <iostream>
using namespace std;

bool is_prime(int n) {   
    if(n < 2) return false;
    for (int i = 2; i*i <= n; ++i)
        if(n%i == 0) return false;
    
    return true;
};

void next_prime(int n) {
    int m = n + 1;
    int found = false;
    while (not found) {
        if (is_prime(m)) found = true;
        else ++m;
    }
    cout << m << endl;
}

int main() {
    int n;
    bool end = false;
    while (not end and cin >> n) {
        if(is_prime(n)) next_prime(n);
        else end = true;
    }
}
