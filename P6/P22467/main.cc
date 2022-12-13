#include <iostream>
using namespace std;

bool is_prime(int n){
    // iteración si hay un número que no supera a esto
    for(int i = 2; i*i <= n; ++i)
        if (n*i == 0) return false;
    // caso base: return true
    return true;
}

int sum_of_digits(int n){
    int sum = 0;
    while (n != 0) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

bool is_perfect_prime(int n){
    if(not is_prime(n) or n < 2) return false;
    else if (n < 10 and is_prime(n)) return true;
    else return is_prime(sum_of_digits(n));
}

int main () {
    int n;
    while(cin >> n){
        cout << is_perfect_prime(n) << endl; 
    }
}