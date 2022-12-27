#include <iostream>
using namespace std;

void info_sequence(int& sum, int& last) {
    int aux;
    bool end = false;
    sum = 0;
    while(not end and cin >> aux) {
        if(aux != 0) {
            sum += aux;
            last = aux;
        }
        else end = true;
    }
}

int main () {
    int sum = -1;
    int counter = 1;
    int first_seq_sum;
    int first_seq_last = 0;
    info_sequence(first_seq_sum, first_seq_last);
    while (sum != 0) {
        int last = -1;
        info_sequence(sum, last);
        if(first_seq_sum == sum and first_seq_last == last) ++counter;
    }
    cout << counter << endl;
}