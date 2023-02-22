#include <iostream>
using namespace std;

int main () {
    cout.precision(4);
    cout.setf(ios::fixed);
    int col_seq;
    cin >> col_seq;
    for (int i = 0; i < col_seq; ++i) {
        double row_seq, min, max, avg, v;
        cin >> row_seq;
        cin >> v;
        min = max = avg = v;

        for (int j = 0; j < row_seq - 1; ++j) {
            cin >> v;
            if(min > v) min = v;
            if(v > max) max = v;
            avg += v;
        }
        cout << min << ' ' << max << ' ' << (avg/row_seq)  << endl;
    }
}