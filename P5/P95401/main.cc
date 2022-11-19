#include <iostream>
#include <cmath>
using namespace std;

bool is_leap_year(int year) {
    if (year % 4 > 0) 
        return false;
    else if (year % 100 > 0)
        return true;
    else if (year % 400 > 0)
        return false;
    else
        return true; 
}

int main() {
    int year;
    while (cin >> year) cout << is_leap_year(year) << endl;
}
