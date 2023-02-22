#include <iostream>
using namespace std;

void classifier (int &low, int &medium, int &high, int count) {
    if (count != 0){
        if (count < 5) ++low;
        else if (count <= 9) ++medium;
        else ++high;
    }
}

int main () {
    char c;
    cin >> c;
    int low = 0;
    int medium = 0;
    int high = 0;
    int count = 0;
    while (c != '.'){
        if (c != '-') ++count;
        else {
            classifier(low, medium, high, count);
            count = 0;
        }
        cin >> c;
    }
    classifier(low,medium,high, count);
    cout << low << ',' << medium << ',' << high << endl;
}