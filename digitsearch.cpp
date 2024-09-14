#include <iostream>
using namespace std;

int main() {
    int r, d, m;
    long n;

    cout << "Input Number: ";
    cin >> n;
    cout << "Input Digit: ";
    cin >> d;


    while (n != 0){
        r = n % 10;
        n = n / 10;

        if (d == r){
            m = r;
            break;
        }
    }
    if(d == r){
        cout << "Number is available";
    }
    else cout << "Number is not available";

}
