#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Input array size: ";
    cin >> n;
    int a[n], c[n];

    for (int i = 0; i < n; i++){
        cout << "Input number: ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        c[i] = a[i];
        cout << c[i] <<  "\n";
    }

}
