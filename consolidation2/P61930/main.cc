#include <iostream>
using namespace std;

int sum_of_digits(int n){
    if (n/10 == 0) return n%10;
    return sum_of_digits(n/10) + n%10;
}

bool is_multiple_3(int n) {
    if (n == 3 or n == 6 or n == 9) return true;
    if (n < 10) return false;
    return is_multiple_3(sum_of_digits(n));
}