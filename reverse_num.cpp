
#include <iostream>
using namespace std;

int main() {
    int n, r, sum;
    cout << "Input number: ";
    cin >> n;
    sum = 0;
    while (n != 0) {
            r = n % 10;
            n = n / 10;
            sum = (sum * 10) + r;

    }
    cout << "Result is: " << sum;
    return 0;
}
