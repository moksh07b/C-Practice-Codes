#include <iostream>
using namespace std;

int main() {
    int n, r, sum, l;
    cout << "Input number: ";
    cin >> n;
    sum = l = 0;
    while (n != 0) {
            r = n % 10;
            n = n / 10;
            sum += r;
            l++;
    }
    cout << "Result is: " << sum << "\n" ;
    cout << "Length of number is: " << l;
    return 0;
}
