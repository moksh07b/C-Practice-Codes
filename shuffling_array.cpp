#include <iostream>

using namespace std;

int main () {
    int n, t;

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
    cout << "\n";

    if(n % 2 == 0){
        for(int i = 0; i < n; i += 2){
            t = a[i+1];
            a[i+1] = a[i];
            a[i] = t;
        }
    }
    else{
            for(int i = 0; i < n-1; i += 2){
            t = a[i+1];
            a[i+1] = a[i];
            a[i] = t;
        }

    }

    for(int i = 0; i < n; i++){
            cout << a[i] << " " ;
    }

}
