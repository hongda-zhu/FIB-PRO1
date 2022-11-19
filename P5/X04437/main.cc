#include <iostream>
#include <cmath>
using namespace std;


double dist_or(double x,double y) {
    double res;
    res = sqrt((x*x)+(y*y));
    return res;
};


int main() {
    double x,y;
    while (cin >> x >> y) cout << dist_or(x,y) << endl;
}
