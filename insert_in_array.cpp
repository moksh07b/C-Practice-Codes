#include <iostream>

using namespace std;

int main () {
    int n, t, l, s, d;

    cout << "Input array size: ";
    cin >> n;

    int a[n+1];

    cout << "Input array elements: \n";

    for(int i = 0; i < n; i++){
            cin >> a[i];
    }
    for(int i = 0; i < n; i++){
            cout << a[i] << " " ;
    }
    cout << "\n";

    cout << "Number to insert: ";
    cin >> t;
    cout << "On which position: ";
    cin >> l;

    s = a[l-1];
    a[l-1] = t;


    for(int i = l; i < n+1; i++){
            d = a[i];
            a[i] = s;
            s = d;

    }



    for(int i = 0; i < n+1; i++){
            cout << a[i] << " " ;
    }

}
