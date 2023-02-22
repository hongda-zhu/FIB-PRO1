#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sumeven = 0;
    int sumodd = 0;
    int count = 1;

    while (n != 0){
        if (count % 2 == 1) sumodd += n%10;
        else sumeven += n%10;
        n /= 10;
        ++count;
    }

    cout << sumodd << ' ' << sumeven << endl;

    if (sumeven == 0 or sumodd == 0){
        cout << "0 = 0 * 1" << endl;
    }else if (sumeven >= sumodd) {
            if (sumeven%sumodd != 0) cout << "nothing" << endl;
            else cout << sumeven << " = " << sumeven/sumodd << " * " << sumodd << endl;
    } else if (sumodd >= sumeven) {
            if (sumodd%sumeven != 0) cout << "nothing" << endl;
            else cout << sumodd << " = " << sumodd/sumeven << " * " << sumeven << endl;
    }
}