#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int elem;
        int prev = -2;
        int max_position = 1; 
        int max_counter = 1;
        int counter = 1;
        int j = 1;
        cin >> elem;
        while (elem != -1) {
            if (prev == elem) {
                ++counter;
                if (counter > max_counter) {
                    max_counter = counter;
                    max_position = j - counter + 1;
                }
            }
            else {
                counter = 1;
            }
            ++j;
            prev = elem;
            cin >> elem;
        }
        cout << max_position << ' ' << max_counter << endl;
    }

}