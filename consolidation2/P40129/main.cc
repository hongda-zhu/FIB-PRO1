#include <iostream>
#include <vector>
using namespace std;

int main () {
    string isbn;
    while (cin >> isbn) {
    int x = 10;
    
    int total = 0;
    for (int i = 0; i < 10; ++i){
        if (isbn[i] == '?') x = 10 - i;
        else if (isbn[i] >= '0' and isbn[i] <= '9') total += (isbn[i] - '0')*(10 - i);
        else if (isbn[i] == 'X') total += 10*(10 - i);
    }
    int i = 0;
    while ((total+x*i)%11 != 0) ++i;

    if (i < 10) cout << i << endl;
    else cout << 'X' << endl;
    }
}