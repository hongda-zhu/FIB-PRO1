//pre: n > 0
//post: returns true when n is two-three-balanced. Returns false otherwise 

#include <iostream>
using namespace std;
bool is_two_three_balanced(int n) {
    if (n%2 == 0 and n%3 == 0) return is_two_three_balanced(n/3 + n/2);
    if (n%2 != 0 and n%3 != 0) return true;
    return false;
}

int main() {
    int n;
    while (cin >> n) {
        if (is_two_three_balanced(n)) cout << "yes";
        else cout << "no";
        cout << endl;
    }
}