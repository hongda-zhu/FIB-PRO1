#include <iostream>
#include <vector>
using namespace std;
typedef vector <vector <int>> Matrix;

Matrix product(const Matrix& a, const Matrix& b) {
    int n = a.size();
    Matrix c(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int sum = 0;

            for (int k = 0; k < n; ++k) {
                sum += a[i][k] * b[k][j];
            }

            c[i][j] = sum;
        }
    }

    return c;
}

Matrix create_matrix () {
    int row_len, col_len;
    cin >> row_len >> col_len;
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
    Matrix m1 = create_matrix();
    Matrix m2 = create_matrix();
    Matrix res = product(m1, m2);
    print_matrix(res);
}