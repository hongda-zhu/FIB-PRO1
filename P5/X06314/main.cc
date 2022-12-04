#include <iostream>
using namespace std;

void info_sequence(int& sum, int& last) {
    int n;
    sum = 0;
    while (cin >> n and n != 0) {
        last = n;
        sum+=n;
    }
}

int main () {
    int sum,last;
    int count = 1;
    info_sequence(sum,last);
    int first_sum = sum;
    int first_last = last;
    while (sum!=0) {
        info_sequence(sum,last);
        if (first_sum == sum and first_last == last) ++count;
    }
    cout << count << endl;
}