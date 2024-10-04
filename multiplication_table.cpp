#include <iostream>
using namespace std;

int main () {
    int r, c, i, j;

    cout << "Input no of rows: ";
    cin >> r;
    cout << "Input no of columns: ";
    cin >> c;

    for (i = 1; i <= r; i++) {
        for(j = 1; j <= c; j++) {
            if ((j*i) <= 9){
            cout << j * i << "   ";
        }
        else if (j*i < 100) {
            cout << j * i << "  ";
        }
        else {
            cout << j * i << " ";
        }

        }
        cout << "\n==================================================================";
        cout << "\n";
    }

}
