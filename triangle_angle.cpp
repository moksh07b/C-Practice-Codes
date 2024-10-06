
#include<iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Input first angle: ";
    cin >> a;
    cout << "Input second angle: ";
    cin >> b;
    cout << "Input third angle: ";
    cin >> c;
    if(a + b + c == 180) {
        cout << "Triangle can be formed\n";
    }
    else {
        cout << "Triangle cannot be formed\n";
    }
    cout << "done";
}
