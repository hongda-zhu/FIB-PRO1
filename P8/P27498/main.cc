#include <iostream>
#include <vector>
using namespace std;
typedef vector <vector <int>> Matrix;

void swap (int&a, int&b) {
    int aux = a;
    a = b;
    b = aux;
}

void transpose (Matrix& m) {
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 1 + i; j < m.size(); ++j) swap(m[i][j], m[j][i]);
    }
}

Matrix create_matrix (int row_len, int col_len) {
    Matrix m (row_len, vector <int> (col_len));
    for (int i = 0; i < row_len; ++i) {
        for (int j = 0; j < col_len; ++j) cin >> m[i][j];
    }
    return m;
}

void print_matrix (const Matrix& m) {
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m.size(); ++j) cout << m[i][j];
        cout  << endl;
    }
}

int main () {
    int row_len, col_len;
    cin >> row_len >> col_len;
    Matrix m = create_matrix(row_len, col_len);
    transpose(m);
    print_matrix(m);
}