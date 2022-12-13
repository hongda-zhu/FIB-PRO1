#include <iostream>
using namespace std;

int reverse_order(int n) {
    string word;
    if (cin >> word) {
        // first iteration
        int counter = reverse_order(n + 1);
        if (n < counter/2)
            cout << word << endl;
        return counter;
    }
    return n;
}

int main() {
    reverse_order(0);
}