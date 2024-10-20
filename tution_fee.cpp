#include <iostream>

using namespace std;

int main() {
    int i, b;
    cout << "Input Tuition fee: ";
    cin >> b;
    for (i = 2011; i <= 2020; i++){
        cout <<i<< " = " << b<<"\n";
        b = b + (b*10)/100;
    }
    return 0;

}
