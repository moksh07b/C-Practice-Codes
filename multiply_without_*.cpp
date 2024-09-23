#include <iostream>

using namespace std;

int main() {
    int i, n, sum, b;
    sum = 0;
    cout << "Input First number: ";
    cin >> n;
    cout << "Input Second number: ";
    cin >> b;
    for (i = 1; i <= n; i++) {
        sum = sum + b;
    }
    cout << "Result is: "<<sum;
}
