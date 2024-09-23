#include <iostream>
using namespace std;

int main() {
    int n, d=0, i, j;

    cout << "Input number: ";
    cin >> n;
    for(i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            cout << j;
        }
        cout << "   ";
    }
}
