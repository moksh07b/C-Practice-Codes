#include <iostream>

using namespace std;

int main() {
    int i, b;
    cout << "Input number: ";
    cin >> b;
    for (i = 1; i <= b/2 ; i++){
        if(b % i == 0) {
            cout << "      "<<i<< "\n";
        }
    }
    return 0;

}
