#include <iostream>
using namespace std;

int main() {
    int n, r, sum, l;
    cout << "Input number: ";
    cin >> n;
    l = n;
    sum = 0;
    while (n != 0) {
            r = n % 10;
            n = n / 10;
            sum += r;
    }
    if (l % sum == 0){
        cout << "Number is niven number";
    }
    else {
        cout << "Number is not niven number";
    }
    return 0;
}
