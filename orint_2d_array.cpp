#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout << "Input row size: ";
    cin >> r;
    cout << "Input column size: ";
    cin >> c;

    int a[r][c];

    cout << "Input array elements: \n";
    for (int i = 0; i < r; i++){
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    cout << "=========================\n";

    for (int i = 0; i < r; i++){
        for(int j = 0; j < c; j++) {
            cout << a[i][j] << " " ;
        }
        cout << "\n";
    }

}
