#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cin >> n;

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            char m;
            cin >> m;
            if (i == j or i + j + 1 == n) sum += int(m) -'0'; 
        }
    }
    cout << sum << endl;
}