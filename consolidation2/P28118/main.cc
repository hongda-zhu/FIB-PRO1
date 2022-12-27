#include <iostream>
#include <cmath>
using namespace std;

double euc_dist(double x1, double y1, double x2, double y2){
    return sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
}

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
    string location;
    while (cin >> location) {
        double total = 0;
        double x0,y0,x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x0 = x1;
        y0 = y1;

        while ((x2 != x0) or (y2 != y0)){
            total += euc_dist (x1,y1,x2,y2);
            x1 = x2;
            y1 = y2;
            cin >> x2 >> y2;
        }   

        total += euc_dist(x1,y1,x0,y0);
        cout << "Route " << location << ": " << total << endl;
    }

}