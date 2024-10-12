#include <iostream>

using namespace std;

int main () {
    int n, t, s;

    cout << "Input array size: ";
    cin >> n;

    int a[n];

    cout << "Input array elements: \n";

    for(int i = 0; i < n; i++){
            cin >> a[i];
    }
    for(int i = 0; i < n; i++){
            cout << a[i] << " " ;
    }

    t = a[0];
    a[0] = a[n-1];

    cout << "\n";


    for(int i = 1; i < n; i++){
        s = a[i];
        a[i] = t;
        t = s;

    }

    for(int i = 0; i < n; i++){
            cout << a[i] << " " ;
    }
}
