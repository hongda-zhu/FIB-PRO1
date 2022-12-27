#include <iostream>
#include<vector>
using namespace std;

void print (int& counter, bool& first) {
    while(counter != 0) {
        --counter;
        int n;
        cin >> n;
        print(counter, first);
        if(not first) cout << ' ';
        first = false;
        cout << n;
    }
}

int main () {
    int counter;
    bool first = true;
    cin >> counter;
    print(counter, first);
    
}