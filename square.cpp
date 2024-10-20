#include<iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Length: ";
    cin >> a;
    cout << "Width: ";
    cin >> b;
    if(a == b) {
        cout << "Rectangle is Square\n";
    }
    else {
        cout << "Rectangle is not Square\n";
    }
    cout << "done";
}
