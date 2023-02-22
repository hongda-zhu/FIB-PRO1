#include <iostream>
using namespace std;

int countword(char c) {
    int counter = 0;
    while (c != '$') {
        bool noa = true;
        char past = '#';
        while (c >= 'a' and c <= 'z') {
            if (c == 'a') noa = false;
            past = c;
            cin >> c;
        }
        if (not noa and past != '#') ++counter;
        if (c == '#') cin >> c;
    }
    return counter;
}

int main (){
    char c;
    cin >> c; 
    cout << countword(c) << endl;
}