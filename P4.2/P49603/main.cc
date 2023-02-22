#include <iostream>
using namespace std;

int main() {
    bool found = false;
    
    int n;
    int counter = 0;
    int res = 0;
    while (cin >> n) {
        string prev;
        found = true;
        for (int i = 0; i < n; ++i) {
            string word;
            cin >> word;
            if (word < prev) found = false;
            prev = word;
        }
        ++counter;
        if(found == true) res = counter;

    }

    if (res != 0) cout << "The last line in increasing order is " << res 
	<<'.' << endl;
    else cout << "There is no line in increasing order." << endl;
}