#include<iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Input first number: ";
    cin >> a;
    cout << "Input second number: ";
    cin >> b;
    if(a > b) {
        cout << "First number is greater than second number\n";
    }
    else {
        cout << "second number is greater than first number\n";
    }
    cout << "done";
}
