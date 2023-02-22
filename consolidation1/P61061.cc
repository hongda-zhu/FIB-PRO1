#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n){
        int m = n;
        bool lessthan10 = n/10 == 0;
        
        while (n > 9 or lessthan10){
            int product;
            if (n == 0) product = 0;
            else product = 1;
            while (n != 0){
                product *= n%10;
                n /= 10;
            }
            cout << "The product of the digits of " << m;
            cout << " is " << product << '.' << endl;
            n = m = product;
            lessthan10 = false;
        }
        cout << "----------" << endl;
    }
}