#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            if (j - i > 0) cout << (j-i)%10;
            else cout << (-j+i)%10;
        }
        cout << endl;
    }
}