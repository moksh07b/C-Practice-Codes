#include<iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Input age: ";
    cin >> a;
    if(a > 18) {
        cout << "Ticket fare is Rs. 300\n";
    }
    else {
        cout << "ticket fare is Rs. "<< 300 - ((300 * 25) / 100) << "\n";
    }
    cout << "done";
}
