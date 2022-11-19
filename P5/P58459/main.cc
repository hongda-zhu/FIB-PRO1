#include <iostream>
#include <cmath>
using namespace std;

bool is_leap_year (int y) {
    if (y % 4 > 0) 
        return false;
    else if (y % 100 > 0)
        return true;
    else if (y % 400 > 0)
        return false;
    else
        return true; 
}

bool is_valid_date(int d, int m, int y) {
    int res = true;
    if((d > 31 or d <= 0) or (m > 12 or m <= 0)) res = false;
    else if (m == 2 and ((d == 29 and not is_leap_year(y)) or d > 29)) res = false;
    else if (d == 31 and (m == 4 or m == 6 or m == 9 or m == 11)) res = false; 

    return res;
}



int main() {
    int d, m, y;
    while (cin >> d >> m >> y) cout << is_valid_date(d, m ,y) << endl;
}
