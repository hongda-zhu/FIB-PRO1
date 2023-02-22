#include <iostream>
using namespace std;

int compara (int d1, int m1, int a1, int d2, int m2, int a2) {
    if (a1 != a2) return a1 - a2;
    else if (m1 != m2) return m1 - m2;
    else if (d1 != d2) return d1 - d2;
    else return 0;
}

void decode(string data, int &d, int &m, int &a) {
    int base = 1;
    int countbars = 0;
    for (int i = data.length() - 1; i >= 0; --i) {
        if(data[i] == '/' ) {
            base = 1;
            ++countbars;
        } else {
            if (countbars == 0)  
                a += (data[i] - '0') * base;
            else if (countbars == 1)
                m += (data[i] - '0') * base;
            else 
                d += (data[i] - '0') * base;
            base *= 10;
        }
    }
}

int main () {
    string data1, data2;
    while ( cin >> data1 >> data2) {
        int d1 = 0, m1 = 0, a1 = 0, d2 = 0, m2 = 0 , a2 = 0;
        decode(data1, d1, m1, a1);
        decode(data1, d2, m2, a2);
        int result = compara (d1, m1, a1, d2, m2, a2);

    }
}