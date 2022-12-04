#include <iostream>
using namespace std;

void printMiddleValue (char c, int middle) {
    for (int i = 1; i < middle; ++i) {
        for (int j = 1; j <= middle; ++j) {
            if(j != middle) cout << ' ';
            else cout << c << endl;
        }
    }
}

void cross (int n, char c){
    int middle = n/2 + 1;
    // upper part
    printMiddleValue(c, middle);

    // middle part
    for(int k = 0; k < n; ++k) {
        cout << c;
    }
    cout << endl;

    // lower part
    printMiddleValue(c, middle);
}

int main () {
    int n;
    char c;
    cin >> n >> c;
    cross(n, c);
}