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
    n = 0;
    while (sum!=0){
        r = sum % 10;
        sum = sum / 10;
        n = (n + r) * 2;
    }
    cout << "\nResult is: " << n;
    return 0;
}
