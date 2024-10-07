#include <iostream>

using namespace std;

int main() {
    int i, n, sum, b;
    sum = 1;
    cout << "Input power: ";
    cin >> n;
    cout << "Input base: ";
    cin >> b;
    for (i = 1; i <= n; i++) {
        sum = sum * b;
    }
    cout << "Result is: "<<sum;
}
