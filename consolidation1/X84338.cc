#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    m = n;

    int firsth = 0;
    int secondh = 0;
    int ndigits = 0;

    while (m != 0){
        m /= 10;
        ++ndigits;
    }

    bool inputcheck = n == 0 or ndigits%2 == 1;
    for (int i = 0; i < ndigits; ++i){
        if (i < ndigits/2){
            secondh += n%10;
            n /= 10;
        }
        else {
            firsth += n%10;
            n /= 10;
        }
    }
    if (inputcheck) cout << "nothing" << endl;
    else if (firsth > secondh) cout << firsth << " > " << secondh << endl;
    else if (firsth < secondh) cout << firsth << " < " << secondh << endl;
    else cout << firsth << " = " << secondh << endl;

}