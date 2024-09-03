#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Input number: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        sum = sum + i;
        }

        cout << "Average is: " << sum / n;
}
