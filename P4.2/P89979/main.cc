#include <iostream>
using namespace std;

int main() {
    bool found = false;
    
    int n;
    int counter = 0;
    while (not found and cin >> n) {
        string prev;
        ++counter;
        found = true;
        for (int i = 0; i < n; ++i) {
            string word;
            cin >> word;
            if (word < prev) found = false;
            prev = word;
        }
    }

    if (found) cout << "The first line in increasing order is " << counter 
	<<'.' << endl;
    else cout << "There is no line in increasing order." << endl;
}