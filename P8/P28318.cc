#include <iostream>
#include <vector>
using namespace std;
typedef vector <int> Row;
typedef vector <Row> Matrix;

void fillmatrix (Matrix& r){
    for (int i = 0; i < r.size(); ++i){
        for (int j = 0; j < r[0].size(); ++j){
            cin >> r[i][j];
        }
    }
}
void printrow (Matrix& r){
    int n;
    cin >> n;
    cout << "row" << " " << n << ":";
    --n;
    for (int i = 0; i < r[0].size(); ++i){
        cout << ' ' << r[n][i];
    }
    cout << endl;
}
void printcol (Matrix& r){
    int n;
    cin >> n;
    cout << "column" << " " << n << ":";
    --n;
    for (int i = 0; i < r.size(); ++i){
        cout << ' ' << r[i][n];
    }
    cout << endl;
}

int main () {
    int row, col;
    cin >> row >> col;
    Matrix matrix (row, Row(col));
    fillmatrix(matrix);
    string type;
    while (cin >> type){
        if (type == "row"){
            printrow(matrix);
        }
        else if (type == "column"){
            printcol(matrix);
        }
        else {
            int a, b;
            cin >> a >> b;
            cout << type << ' ' << a << ' ' << b << ": ";
            cout << matrix[a - 1][b - 1] << endl;
        }
    }
}