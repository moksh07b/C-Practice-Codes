#include <iostream>

using namespace std;

int main() {
    float i, n, a, b, sum,  d;
    a = 1;
    d = 1;
    sum = 0;
    cout << "Input power: "; // 4
    cin >> n;
    cout << "Input base: "; // 3
    cin >> b;
    for (i = 1; i <= n; i++) { // 3/1 + 9/2 + 27/6 + 81/24 = 15.375
        a = a * b;
        d = d * i;

        sum += a/d;
    }
    cout << "Result is: "<< sum;
}
